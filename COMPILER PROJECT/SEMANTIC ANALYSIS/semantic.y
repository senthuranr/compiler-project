%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SymbolTable.c"
int i=1,k=-1,l=-1;
int j=0;
char curfunc[100];
int stack[100];
int top=0;
int plist[100],flist[100];
int end[100];
int arr[10];
int ct=0,c=0,b;
int loop = 0;
int errc=0;
int type=0;
extern int yylineno;
%}

%token<ival> INT FLOAT VOID
%token<str> ID NUM REAL
%token WHILE IF RETURN MAIN LE STRING PRINT FUNCTION DO ARRAY ELSE STRUCT STRUCT_VAR FOR GE EQ NE INC DEC
%right '='

%type<str> ASSIGN ASSIGN1 CONSTTYPE ASSIGN2
%type<ival> TYPE

%union
{
	int ival;
	char *str;
}

%%

START : FUNC START
      | MAIN START
      | DECLARE START
      |
      ;

FUNC  : TYPE ID '('')' CSTMT {
		if ($1!=returntype_func(ct))
		{
			printf("\nError : Type mismatch : Line %d\n",printline()); errc++;
		}

		if (!(strcmp($2,"printf") && strcmp($2,"scanf") && strcmp($2,"getc") && strcmp($2,"gets") && strcmp($2,"getchar") && strcmp	($2,"puts") && strcmp($2,"putchar") && strcmp($2,"clearerr") && strcmp($2,"getw") && strcmp($2,"putw") && strcmp($2,"putc") && strcmp($2,"rewind") && strcmp($2,"sprint") && strcmp($2,"sscanf") && strcmp($2,"remove") && strcmp($2,"fflush")))
		{
			printf("Error : Redeclaration of %s : Line %d\n",$2,printline()); errc++;
		}
		else
		{
			insert($2,FUNCTION);
			insert($2,$1);
		}
	}
      | TYPE ID '(' PARALIST ')' CSTMT  {
		if ($1!=returntype_func(ct))
		{
			printf("\nError : Type mismatch : Line %d\n",printline()); errc++;
		}	
		if (!(strcmp($2,"printf") && strcmp($2,"scanf") && strcmp($2,"getc") && strcmp($2,"gets") && strcmp($2,"getchar") && strcmp	($2,"puts") && strcmp($2,"putchar") && strcmp($2,"clearerr") && strcmp($2,"getw") && strcmp($2,"putw") && strcmp($2,"putc") && strcmp($2,"rewind") && strcmp($2,"sprint") && strcmp($2,"sscanf") && strcmp($2,"remove") && strcmp($2,"fflush")))
		{
			printf("Error : Redeclaration of %s : Line %d\n",$2,printline());errc++;
		}
		else
		{
			insert($2,FUNCTION);
			insert($2,$1);
	                for(j=0;j<=k;j++)
        	        {
				insertp($2,plist[j]);
			}
	                k=-1;
		}
	 }
      ;

PARALIST : PARALIST ',' PARA
         | PARA
         ;

PARA : TYPE ID { plist[++k]=$1; insert($2,$1); insertscope($2,i); }
     ;

TYPE : INT
     | FLOAT
     | VOID
     ;

CSTMT : '{' STMTLIST '}'
      ;

STMTLIST : STMTLIST STATEMENT
	 | CSTMT
	 |
	 ;

STATEMENT : DECLARE
	| if
        | for
	| while
	| dowhile
	| RETURN CONSTTYPE ';' {
					if(!(strspn($2,"0123456789")==strlen($2)))
						storereturn(ct,FLOAT);
					else
						storereturn(ct,INT);
					ct++;
				}
	| RETURN ';' { storereturn(ct,VOID); ct++; }
        | RETURN ID ';' {
                          int sct=returnscope($2,stack[top-1]);
		          int type=returntype($2,sct);
                          if (type==259) storereturn(ct,FLOAT);
                          else storereturn(ct,INT);
                          ct++;
                         }
	| ';'
	| PRINT '(' STRING ')' ';'
	| CSTMT
	;

dowhile : DO CSTMT WHILE '(' EXPR1 ')' ';'
	;

if : IF '(' EXPR1 ')' CSTMT
	| IF '(' EXPR1 ')' CSTMT ELSE CSTMT
	;

for : FOR '(' EXPR1 ';' EXPR1 ';' EXPR1 ')' '{' {loop=1;} STMTLIST {loop=0;} '}'
     ;

while : WHILE '(' EXPR1 ')' '{' {loop=1;} STMTLIST {loop=0;} '}'
	;

EXPR1 : EXPR1 LE EXPR1
        | EXPR1 GE EXPR1
        | EXPR1 NE EXPR1
        | EXPR1 EQ EXPR1
        | EXPR1 INC
        | EXPR1 DEC
        | EXPR1 '>' EXPR1
        | EXPR1 '<' EXPR1
	| ASSIGN1
	;

ASSIGN : ID '=' CONSTTYPE
	| ID '+' ASSIGN
	| ID ',' ASSIGN
	| CONSTTYPE ',' ASSIGN
	| ID
	| CONSTTYPE
	;

ASSIGN1 : ID '=' ASSIGN1 {
				int sct=returnscope($1,stack[top-1]);
				int type=returntype($1,sct);
				if((!(strspn($3,"0123456789")==strlen($3))) && type==258)
				{
					printf("\nError : Type Mismatch : Line %d\n",printline());
					errc++;
				}
		                else if (type==273)  
				{
					printf("\nError : Type Mismatch : Line %d\n",printline());
					errc++;
				}
				if(!lookup($1))
				{
					int currscope=stack[top-1];
					int scope=returnscope($1,currscope);
					if((scope<=currscope && end[scope]==0) && !(scope==0))
					check_scope_update($1,$3,currscope);
				}
		}

	| ID ',' ASSIGN1 {
				if(lookup($1))
					printf("\nUndeclared Variable %s : Line %d\n",$1,printline()); errc++;
		}
	| ASSIGN2
	| CONSTTYPE ',' ASSIGN1
	| ID {
		if(lookup($1))
			{ printf("\nUndeclared Variable %s : Line %d\n",$1,printline()); errc++; }
	   }
	| ID '=' ID '(' PARALIST ')' {
			                int sct=returnscope($1,stack[top-1]);
					int type=returntype($1,sct);
        			        int rtype;
        			        rtype=returntypef($3); int ch=0;
					if(rtype!=type)
					{
						printf("\nError : Type Mismatch : Line %d\n",printline()); 
						errc++;
					}
					if(!lookup($1))
					{
		  				for(j=0;j<=l;j++)
                  				{
							ch = ch+checkp($3,flist[j],j);
						}
			                	if(ch>0) 
						{	 
							printf("\nError : Parameter Type Mistake or Function undeclared : Line %d\n",printline()); 
							errc++;
						}
			                	l=-1;
					}
		}
	| ID '(' PARALIST ')' {		
		                int sct=returnscope($1,stack[top-1]);
				int type=returntype($1,sct); int ch=0;
				if(!lookup($1))
				{
				  for(j=0;j<=l;j++)
               			  {
					ch = ch+checkp($1,flist[j],j);
				  }
		                  if(ch>0) 
				  { 
					printf("\nError : Parameter Type Mistake or Required Function undeclared : Line %d\n",printline()); 
					errc++;
				  }
                  		  l=-1;
				}
                		else 
				{
					printf("\nUndeclared Function %s : Line %d\n",$1,printline());
					errc++;
				}
	}

	| CONSTTYPE
	;

PARALIST : PARALIST ',' PARAM
         | PARAM
         ;

PARAM : ID
	{
                if(lookup($1))
	        {
			printf("\nUndeclared Variable %s : Line %d\n",$1,printline());
			errc++;
		}
                else
                {
                	int sct=returnscope($1,stack[top-1]);
                	flist[++l]=returntype($1,sct);
                }
	}
      ;

ASSIGN2 : ID '=' E { c=0; }
	| ID '=' '(' E ')'
	;

E : ID
	{
		if(c==0)							
		{
			c=1;
			int sct=returnscope($1,stack[top-1]);
			b=returntype($1,sct);
		}
		else
		{
			int sct1=returnscope($1,stack[top-1]);
			if(b!=returntype($1,sct1)){}
				{printf("\nError : Type Mismatch : Line %d\n",printline());errc++;}
		}
	}
	| E '+' E
	| E '-' E
	| E '*' E
	| E '/' E
	| '(' E '+' E ')'
	| '(' E '-' E ')'
	| '(' E '*' E ')'
	| '(' E '/' E ')'
	| CONSTTYPE
	;

CONSTTYPE : NUM
	  | REAL
	  ;

DECLARE : TYPE ID '=' CONSTTYPE ';'
	{
		if((!(strspn($4,"0123456789")==strlen($4))) && $1==258)			
		{
			printf("\nError : Type Mismatch : Line %d\n",printline());
			errc++;
		}
                else if ($1==273)  
		{
			printf("\nError : Type Mismatch : Line %d\n",printline());
			errc++;
		}
		if(!lookup($2))
		{
			int currscope=stack[top-1];
			int previous_scope=returnscope($2,currscope);
			if(currscope==previous_scope)
			{
				printf("\nError : Redeclaration of %s : Line %d\n",$2,printline());
				errc++;
			}
			else
			{
				insert_dup($2,$1,currscope);
				check_scope_update($2,$4,stack[top-1]);
			}
		}
		else
		{
			int scope=stack[top-1];
			insert($2,$1);
			insertscope($2,scope);
			check_scope_update($2,$4,stack[top-1]);
		}
	}
	| ASSIGN2 ';'
	{
		if(!lookup($1))
		{
			int currscope=stack[top-1];
			int scope=returnscope($1,currscope);
			int type=returntype($1,scope);
			if(!(scope<=currscope && end[scope]==0) || scope==0 && type!=271)
			{
				printf("\nError : Variable %s out of scope : Line %d\n",$1,printline());
				errc++;
			}
		}
		else
		{
			printf("\nError : Undeclared Variable %s : Line %d\n",$1,printline());
			errc++;
		}
	}
        | TYPE ID ';'
        {
        	if(!lookup($2))
		{
			int currscope=stack[top-1];
			int previous_scope=returnscope($2,currscope);
			if(currscope==previous_scope)
			{
				printf("\nError : Redeclaration of %s : Line %d\n",$2,printline());
				errc++;
			}
			else
			{
				insert_dup($2,$1,currscope);
			}
		}
		else
		{
			int scope=stack[top-1];
			insert($2,$1);
			insertscope($2,scope);
		}
	}
	| TYPE ID '[' ASSIGN ']' ';' {
                       int itype;
                       if(!(strspn($4,"0123456789")==strlen($4))) { itype=259; } else itype = 258;
                       if(itype!=258)
                       { printf("\nError : Array index must be of type int : Line %d\n",printline());errc++;}
                       if(atoi($4)<=0)
                       { printf("\nError : Array index must be of type int > 0 : Line %d\n",printline());errc++;}
                       if(!lookup($2))
		       {
			int currscope=stack[top-1];
			int previous_scope=returnscope($2,currscope);
			if(currscope==previous_scope)
				{printf("\nError : Redeclaration of %s : Line %d\n",$2,printline());errc++;}
			else
			{

				insert_dup($2,ARRAY,currscope);
                                insert_by_scope($2,$1,currscope);	
                                if (itype==258) {insert_index($2,$4);}
			}
		      }
		      else
		      {
			int scope=stack[top-1];
                        insert($2,ARRAY);
			insert($2,$1);
			insertscope($2,scope);
                        if (itype==258) {insert_index($2,$4);}
		      }

		    }
	;



%%

#include "lex.yy.c"
#include<ctype.h>
int main(int argc, char *argv[])
{
	yyin =fopen(argv[1],"r");
	if(!yyparse()&& errc<=0)
	{
		printf("\nParsing Completed\n");
		display();
	}
	else
	{
		printf("\nParsing Failed\n");
                display();
	}
	fclose(yyin);
	return 0;
}

yyerror(char *s)
{
	printf("\nLine %d : %s %s\n",yylineno,s,yytext);
}

int printline()
{
	return yylineno;
}
void push()
{
	stack[top]=i;
	i++;
	top++;
	return;
}
void pop()
{
	top--;
	end[stack[top]]=1;
	stack[top]=0;
	return;
}
