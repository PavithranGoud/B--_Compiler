%{
   #include<stdio.h>
   #include<string.h>
   #include<math.h>
   #include<stdlib.h>
   #include"y.tab.h"

%}

%%
"END"              {fprintf(yyout,"END  :  END \n");return END;}
"PRINT"            {fprintf(yyout,"PRINT: PRINT \n");return PRINT;}
"IF"               {fprintf(yyout,"IF   : IF \n");return IF;}
"THEN"             {fprintf(yyout,"THEN : THEN \n");return THEN;}
"INPUT"            {fprintf(yyout,"INPUT : INPUT \n");return INPUT;}
"LET"              {fprintf(yyout,"LET  : LET \n");return LET;}
"DEF"              {fprintf(yyout,"DEF  : DEF \n");return DEF;}
"DIM"              {fprintf(yyout,"DIM  : DIM \n");return DIM;}
"DATA"             {fprintf(yyout,"DATA : DATA \n");return DATA;}
"FOR"              {fprintf(yyout,"FOR  : FOR \n");return FOR;}
"TO"               {fprintf(yyout,"TO   : TO \n");return TO;}
"NEXT"             {fprintf(yyout,"NEXT : NEXT \n");return NEXT;}
"STEP"             {fprintf(yyout,"STEP : STEP \n");return STEP;}
"GOSUB"            {fprintf(yyout,"GOSUB : GOSUB \n");return GOSUB;}
"GOTO"             {fprintf(yyout,"GOTO : GOTO \n");return GOTO;}
"RETURN"           {fprintf(yyout,"RETURN : RETURN \n");return RETURN;}
"STOP"             {fprintf(yyout,"STOP : STOP \n");return STOP;}
"FN"[A-Z]            {fprintf(yyout,"FUNCTION : FUNCTION \n");return FUNCTION;}
\"[^\";]*\"               {fprintf(yyout,"STRING : %s \n",yytext);yylval.dat.id =(char * )malloc(sizeof(char *));yylval.dat.type = 3;strcpy(yylval.dat.id,yytext); return STR;}
REM.*\n            {fprintf(yyout,"Comment = %s\n",yytext);return REM;}                                                         
[0-9]*						               {yylval.dat.value = atoi(yytext);yylval.dat.id =(char * )malloc(sizeof(char *));yylval.dat.type = 1;strcpy(yylval.dat.id,yytext);fprintf(yyout,"INT = %s\n",yytext);return INT;}
[0-9]*\.[0-9]*                         {yylval.dat.value = atof(yytext);yylval.dat.id =(char * )malloc(sizeof(char *));yylval.dat.type = 2;strcpy(yylval.dat.id,yytext);fprintf(yyout,"FLOAT = %s\n",yytext);return FLOAT;}

[A-Z][0-9]?%?          {fprintf(yyout,"VARIABLE : %s\n",yytext);yylval.dat.id =(char * )malloc(sizeof(char *));yylval.dat.type = 1;strcpy(yylval.dat.id,yytext);return VAR;}
[A-Z][0-9]?\$          {fprintf(yyout,"VARIABLE : %s\n",yytext);yylval.dat.id =(char * )malloc(sizeof(char *));yylval.dat.type = 3;strcpy(yylval.dat.id,yytext);return VAR_STR;}
[A-Z][0-9]?\!          {fprintf(yyout,"VARIABLE : %s\n",yytext);yylval.dat.id =(char * )malloc(sizeof(char *));yylval.dat.type = 2;strcpy(yylval.dat.id,yytext);return VAR_SP;}
[A-Z][0-9]?\#          {fprintf(yyout,"VARIABLE : %s\n",yytext);yylval.dat.id =(char * )malloc(sizeof(char *));yylval.dat.type = 2;strcpy(yylval.dat.id,yytext);return VAR_DP;}
"<>"                   {fprintf(yyout,"NEQ : '<>' \n");return NEQ;}
"<="                   {fprintf(yyout,"LEQ : '<=' \n");return LEQ;}
">="                   {fprintf(yyout,"GEQ : '<=' \n");return GEQ;}                                       
\+                     {fprintf(yyout,"PLUS : '+'  \n");return *yytext;}
\*                     {fprintf(yyout,"MULTIPLY : '*'  \n");return *yytext;}
\-                     {fprintf(yyout,"MINUS : '-'  \n");return *yytext;}
\/                     {fprintf(yyout,"DIVIDE : '/'  \n");return *yytext;}
\^                     {fprintf(yyout,"EXPONENTIAL : '^'  \n");return *yytext;}
\<                     {fprintf(yyout,"LESS : '<' \n");return *yytext;}
\>                     {fprintf(yyout,"GREATER : '>' \n");return *yytext;}
\=                     {fprintf(yyout,"ASSIGN : '=' \n");return *yytext;}
\(                     {fprintf(yyout," LEFT_PAREN : '('  \n");return *yytext;}
\)                     {fprintf(yyout," RIGHT_PAREN : ')'  \n");return *yytext;}
\;                    {fprintf(yyout,"SEMI_COL  : ';'  \n");return *yytext;}
\,                     {fprintf(yyout,"COMMA    : ','  \n");return *yytext;}
[A-Za-z][A-Za-z]+   {fprintf(yyout,"error %s\n",yytext);}
\n                   {return *yytext;}
%%

  

