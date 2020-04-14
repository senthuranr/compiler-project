
alpha 	[A-Za-z_]
fl	(f|F|l|L)
ul	(u|U|l|L)*
digit 	[0-9]
space 	[ ]
hex	[a-fA-F0-9]
exp	[Ee][+-]?{digit}+

%{
	#include <stdio.h>
	#include <string.h> 
	char datatype[100] = "dummy";
	int tl;
	char next;
%}

%%	
\n	{ yylineno++; }
"/*"	{ mulcomment(); }
"//"	{ singlecomment(); }

"#include<"({alpha})*".h>"	{ }

"#define"({space})""({alpha})""({alpha}|{digit})*""({space})""({digit})+"" 			{ return DEF;}
"#define"({space})""({alpha}({alpha}|{digit})*)""({space})""(({digit}+)\.({digit}+))"" 		{ return DEF;}
"#define"({space})""({alpha}({alpha}|{digit})*)""({space})""({alpha}({alpha}|{digit})*)"" 	{ return DEF;}

{digit}+    				{  insertToCT(yytext, yylineno, "INT"); return CON; }
({digit}+)\.({digit}+) 			{  insertToCT(yytext, yylineno, "FLOAT"); return CON; }
0[xX]{hex}+{ul}?			{  insertToCT(yytext, yylineno, "FLOAT"); return CON; }
{digit}+{ul}?				{  insertToCT(yytext, yylineno, "FLOAT"); return CON; }
'(\\.|[^\\'])+'				{  insertToCT(yytext, yylineno, "FLOAT"); return CON; }
{digit}+{exp}{fl}?			{  insertToCT(yytext, yylineno, "FLOAT"); return CON; }
{digit}*"."{digit}+({exp})?{fl}?	{  insertToCT(yytext, yylineno, "FLOAT"); return CON; }
{digit}+"."{digit}*({exp})?{fl}?	{  insertToCT(yytext, yylineno, "FLOAT"); return CON; }

{alpha}?\"(\\.|[^\\"])*\"		{  insertToCT(yytext, yylineno, "STRING"); return STRG; } 

"->"			{  return PTR; }
"++"			{  return INC; }
"--"			{  return DEC; }
"<<"			{  return LEFT; }
">>"			{  return RIGHT; }
"<="			{  return LE; }
">="			{  return GE; }
"=="			{  return EQ; }
"!="			{  return NE; }
"&&"			{  return AND; }
"||"			{  return OR; }
"*="			{  return MUL_ASSIGN; }
"/="			{  return DIV_ASSIGN; }
"%="			{  return MOD_ASSIGN; }
"+="			{  return ADD_ASSIGN; }
"-="			{  return SUB_ASSIGN; }
"<<="			{  return LEFT_ASSIGN; }
">>="			{  return RIGHT_ASSIGN; }
"&="			{  return AND_ASSIGN; }
"^="			{  return XOR_ASSIGN; }
"|="			{  return OR_ASSIGN; }

"auto"			{ return AUTO; }
"break"			{ return BREAK; }
"case"			{ return CASE; }
"char"			{ return CHAR; }
"const"			{ return CONST; }
"continue"		{ return CONTINUE; }
"default"		{ return DEFAULT; }
"do"			{ return DO; }
"double"		{ return DOUBLE; }
"else"			{ return ELSE; }
"enum"			{ return ENUM; }
"extern"		{ return EXTERN; }
"float"			{ strcpy(datatype, "FLOAT"); tl = yylineno; return FLOAT; }
"for"			{ return FOR; }
"goto"			{ return GOTO; }
"if"			{ return IF; }
"int"			{ strcpy(datatype, "INT"); tl = yylineno; return INT; }
"long"			{ return LONG; }
"register"		{ return REGISTER; }
"return"		{ return RETURN; }
"short"			{ return SHORT; }
"signed"		{ return SIGNED; }
"sizeof" 		{ return SIZEOF; }
"static"		{ return STATIC; }
"struct"		{ return STRUCT; }
"switch"		{ return SWITCH; }
"typedef"		{ return TYPEDEF; }
"union"			{ return UNION; }
"unsigned"		{ return UNSIGNED; }
"void"			{ return VOID; }
"volatile"		{ return VOLATILE; }
"while"			{ return WHILE; }


";"			{  strcpy(datatype, "dummy"); return(';'); }
("{"|"<%")		{  return('{'); }
("}"|"%>")		{  return('}'); }
","			{  return(','); }
":"			{  return(':'); }
"="			{  return('='); }
"("			{  return('('); }
")"			{  return(')'); }
("["|"<:")		{  return('['); }
("]"|":>")		{  return(']'); }
"."			{  return('.'); }
"&"			{  return('&'); }
"!"			{  return('!'); }
"~"			{  return('~'); }
"-"			{  return('-'); }
"+"			{  return('+'); }
"*"			{  return('*'); }
"/"			{  return('/'); }
"%"			{  return('%'); }
"<"			{  return('<'); }
">"			{  return('>'); }
"^"			{  return('^'); }
"|"			{  return('|'); }
"?"			{  return('?'); }
"printf"|"scanf"	{ insertToH(yytext,"PROCEDURE",yylineno); return ID; }
"main" 			{ insertToH(yytext,"PROCEDURE",yylineno); return ID; }
{alpha}({alpha}|{digit})*    		{  
						if(strcmp(datatype, "dummy")==0)
							return ID;
						else 
						{
							insertToH(yytext,datatype,yylineno);
							return ID; 
						}
					}
[ \t\v\n\f]		{  }
.			{  }
%%

struct cn
{
	char num[50];
	char type[20];
};
struct cn ct[100];
int cnt = 0;

void insertToCT(char *num, int l, char *type)
{
	strcpy(ct[cnt].num, num);
	strcpy(ct[cnt].type, type);
	cnt++;
}

void disp()
{
	int i;
	printf("\n\n------------------------------CONSTANT TABLE------------------------------\n");
	printf("--------------------------------------------------------------------------\n");
	printf("Value \t\t|\tData Type\t\t\n");
	printf("--------------------------------------------------------------------------\n");
	for(i=0;i<cnt;i++)
	{
		printf("%s\t\t\t", ct[i].num);
		printf("%s\t\t\t\n", ct[i].type);
	}
	printf("\n\n");
}

struct node
{
	char token[100];
    	char attr[100];
    	int line_count;
	struct node *next;
};

struct hash
{
	struct node *head;
	int hashcnt;
};

struct hash ht[1000];
int eleCount = 1000;

struct node * createNode(char *token, char *attr, int l)
{
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));
	strcpy(newnode->token, token);
	strcpy(newnode->attr, attr);
	newnode->line_count = 1; 
	newnode->next = NULL;
	return newnode;
}

int hashIndex(char *token)
{
	int hi=0;
	int l,i;
	for(i=0;token[i]!='\0';i++)
	{
		hi = hi + (int)token[i];
	}
	hi = hi%eleCount;
	return hi;
}

void insertToH(char *token, char *attr, int l)
{
	int flag=0;
	int hi;
	hi = hashIndex(token);
	struct node *newnode = createNode(token, attr, l);
	if (ht[hi].head==NULL)
	{
		ht[hi].head = newnode;
	        ht[hi].hashcnt = 1;
	        return;
	}
	struct node *myNode;
    	myNode = ht[hi].head;
	while (myNode != NULL)
    	{
        	if (strcmp(myNode->token, token)==0)
        	{
            		flag = 1;
            		if(strcmp(myNode->attr, attr)!=0)
            		{
            			strcpy(myNode->attr, attr);
            		}
            		break;
        	}
        	myNode = myNode->next;
    	}
	if(!flag)
	{
		newnode->next = (ht[hi].head);
		ht[hi].head = newnode;
		ht[hi].hashcnt++;
	}
	return;
}

void display()
{
    	struct node *myNode;
    	int i,j, k=1;
    	printf("\n-----------------------------------------Symbol Table---------------------------------------------\n");
    	printf("--------------------------------------------------------------------------------------------------");
    	printf("\nToken \t\t|\tToken Type \t\t\t\t\t \n");
        printf("--------------------------------------------------------------------------------------------------\n");
    	for (i = 0; i < eleCount; i++)
    	{
        	if (ht[i].hashcnt == 0)
            		continue;
        	myNode = ht[i].head;
        	if (!myNode)
            		continue;
        	while (myNode != NULL)
        	{
            		printf("%s\t\t\t", myNode->token);
            		printf("%s\t\t\t", myNode->attr);
            		printf("\n");
            		myNode = myNode->next;
        	}
	}
	printf("--------------------------------------------------------------------------------------------------\n");
   	return;
}

yywrap()
{
	return(1);
}
mulcomment()
{
	char c, c1;
	while ((c = input()) != '*' && c != 0);
	c1=input();
	if(c=='*' && c1=='/')
	{
		c=0;
	}
	if (c != 0)
		putchar(c1);
}
singlecomment()
{
	char c;
	while(c=input()!='\n');
	if(c=='\n')
		c=0;
	if(c!=0)
		putchar(c);
}
