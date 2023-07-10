%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    int yylex();
    void yyerror(char* const);
    void print();
    int search(char *);
    extern FILE *yyin,*yyout;
    extern char *yytext;
    extern int yylineno;
    FILE *out;
    int lineno,i,let,lines[10000],k,let,exprs,p;
    struct node{
        int type;
        char name[3];
    }var[286];
    

%}

%token END PRINT LINE IF THEN INPUT LET DEF DIM DATA FOR TO REM NEXT STEP GOSUB GOTO RETURN STOP NEQ LEQ GEQ FUNCTION
%token <dat> INT STR FLOAT VAR VAR_STR VAR_SP VAR_DP
%type <dat> line_no variable  data expr

%union {
    struct varnme{
    int type;
    int value;
    char *id;
    }dat;
}
%left '+' '-'
%left '*' '/'
%left '^'

%%
program:
    |line_no {lineno = $1.value;fprintf(out,"Keyword : ");} line  program
    |'\n'{fprintf(yyout,"\n");} program
    ;
line_no:
     INT {  fprintf(out,"\nLine no: %d\n",$1.value);}
    ;
line:
    |END    {k++;fprintf(out,"EXIT\n");}
    |PRINT  {p =1;fprintf(out,"PRINT\n");}  prin   {p = 0;}
    |LET    {let = 1;fprintf(out,"LET\n");} var_stmnt 
    |DATA   {fprintf(out,"DATA\n");}  val
    |DEF    {fprintf(out,"DEF\n");}   FUNCTION   {fprintf(out,"function : %s\n",yytext);} fbody  {fprintf(out,"function defined above\n");}
    |DIM    {fprintf(out,"DIM\n");} Dbdy
    |FOR    {let = 1;fprintf(out,"FOR\n");} variable '='{fprintf(out,"Assignment : '='\n");} expr TO {fprintf(out,"Keyword : TO\n");} expr step
    |NEXT   {fprintf(out,"NEXT\n");} variable 
    |GOSUB  {fprintf(out,"GOSUB\n");} line_no 
    |STOP  {fprintf(out,"STOP\n");} 
    |GOTO   {fprintf(out,"GOTO\n");}  line_no
    |IF     {fprintf(out,"IF\n");}  cndtn THEN line_no
    |INPUT  {let = 1;fprintf(out,"INPUT\n");} inbdy
    |RETURN {fprintf(out,"RETURN\n");}
    |REM    {fprintf(out,"REM\n");}
    ;

inbdy:
    variable
    |inbdy ','{let = 1;fprintf(out,"delimiter : ','\n");} variable

int:
     INT    {fprintf(out,"Value: %s\n",yytext);}
    |VAR    {fprintf(out,"Variable: %s \n",yytext);}
    |VAR '+' INT

step:
    | STEP {fprintf(out,"Keyword : STEP\n");} expr
Dbdy:
      Dbdy ','{fprintf(out,"delimiter : ','\n");} VAR {fprintf(out,"Variable: %s \n",yytext);} '(' {fprintf(out,"operator : '('\n");} val ')' {fprintf(out,"operator : ')' \n");}
     |VAR {fprintf(out,"Variable: %s \n",yytext);} '(' {fprintf(out,"operator : '('\n");} val ')' {fprintf(out,"operator : ')' \n");}
    ;

fbody:
     '=' {fprintf(out,"Assignment : '='\n");} expr 
    |'('{fprintf(out,"operator : '('\n");} VAR {fprintf(out,"parameter : %s\n",yytext);}  ')' {fprintf(out,"operator : ')' \n");}'=' expr
val:
    val ','{fprintf(out,"Delimiter : ','\n");} data {fprintf(out,"Value: %s\n",yytext);}
    |data   {fprintf(out,"Value: %s\n",yytext);}
    ;
prin:
    |expr
    |print_exp '\n' {fprintf(yyout,"\n");}
    |print_exp expr '\n' {fprintf(yyout,"\n");}
    ;
var_stmnt:
    |variable  '=' {fprintf(out,"Assignment : '='\n");} expr
    ;
cndtn:
    expr
    |expr '='{fprintf(out,"relation : '='\n");} expr
expr:
    data        {if(p == 0)fprintf(out,"Value: %s\n",yytext); else fprintf(out,"Expression: %s\n",yytext); $$ = $1; }
    |variable {$$ = $1;}
    |expr '+' {fprintf(out,"operator : '+'\n");} expr {if($1.type != $4.type){yyerror("Operation '+' between two different data types");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;}
    |expr '-' {fprintf(out,"operator : '-'\n");} expr   {if($1.type != $4.type){yyerror("Operation '-' between two different data types");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;}
    |expr '*' {fprintf(out,"operator : '*'\n");} expr   {if($1.type != $4.type){yyerror("Operation '*' between two different data types");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;}
    |expr '/' {fprintf(out,"operator : '/'\n");} expr   {if($1.type != $4.type){yyerror("Operation '/' between two different data types");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;}
    |expr '^' {fprintf(out,"operator : '^'\n");} expr   {if($1.type != $4.type){yyerror("Operation '/' between two different data types");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;}

    |expr '<' {fprintf(out,"operator : '<'\n");} expr   {if($1.type != $4.type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;}
    |expr '>' {fprintf(out,"operator : '>'\n");} expr   {if($1.type != $4.type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;} 
    |expr LEQ {fprintf(out,"operator : '<='\n");} expr  {if($1.type != $4.type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;}
    |expr GEQ {fprintf(out,"operator : '>='\n");} expr  {if($1.type != $4.type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;}
    |expr NEQ {fprintf(out,"operator : '<>'\n");} expr  {if($1.type != $4.type){yyerror("Comparision between two different data type");printf("%s   and   %s\n",$1.id,$4.id);}else $$ = $1;}
    | '('{fprintf(out,"operator : '('\n");} expr ')' {fprintf(out,"operator : ')'\n");}
    ;

variable:
     VAR     {if(let == 1) {var[i].type = 1;let = 0;var[i].name[0] = yytext[0];var[i].name[1] = yytext[1];i++;}else {if(search(yytext)){yyerror("Variable not declared");printf("%s\n",yytext);}}$$ = $1;fprintf(out,"Variable: %s \n",yytext);}
    |VAR_DP {if(let == 1)  {var[i].type = 2;let = 0;var[i].name[0] = yytext[0];var[i].name[1] = yytext[1];i++;}else {if(search(yytext)){yyerror("Variable not declared");printf("%s\n",yytext);}}$$ = $1;fprintf(out,"Variable: %s \n",yytext);}
    |VAR_SP {if(let == 1)  {var[i].type = 2;let = 0;var[i].name[0] = yytext[0];var[i].name[1] = yytext[1];i++;}else {if(search(yytext)){yyerror("Variable not declared");printf("%s\n",yytext);}}$$ = $1;fprintf(out,"Variable: %s \n",yytext);}
    |VAR_STR {if(let == 1) {var[i].type = 3;let = 0;var[i].name[0] = yytext[0];var[i].name[1] = yytext[1];i++;}else {if(search(yytext)){yyerror("Variable not declared");printf("%s\n",yytext);}}$$ = $1;fprintf(out,"Variable: %s \n",yytext);}
    |variable '('{fprintf(out,"operator : '('\n");} int ')'{fprintf(out,"operator : ')'\n");$$=$1;}
    ;
print_exp:
      print_exp expr delimiter 
     |expr  delimiter 
     ;

delimiter:
    ';'    {fprintf(out,"Delimiter : ';'\n");}
    |','    {fprintf(out,"Delimiter : ','\n");}

data:
     INT   {$$ = $1;}
    |FLOAT {$$ = $1;}
    |STR    {$$ = $1;}
    ;
%%
int yywrap(){
	return 1;
}
void yyerror(char* const y){
    printf("In line no %d | %s :    ",lineno,y);
}
int main(int argv,char *argc[])
{ 
    out = fopen("./parser.txt","w");
    yyin=fopen(argc[1],"r");
    yyout=fopen("./lexer.txt","w");
    yyparse();
    if(k==0)
    {
        printf(" error :   NO END keyword\n");
    }
    else if(k>1)
    {
         printf("error :  END repeated %d times\n",k);
    }
    return 0;
}
void print()
{
   
    for(int i = 1;i<strlen(yytext)-1;i++)
    {
        printf("%c",yytext[i]);
    }
     printf("\n");
}
int search(char *x){
    int n = i;
    for(n = n-1;n>=0;n--)
    {
        if(x[0] == var[n].name[0])
        {
            
            if(x[1] >= '0' && x[1] <='9')
            {
                if(x[1] == var[n].name[1])
                return 0;
            }
            else if(!(var[n].name[1] >= '0' && var[n].name[1] <='9'))
            {
                    return 0;
            }
           
        }
    }
    return 1;
}