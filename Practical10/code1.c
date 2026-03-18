%{
#include<st dio.h> int num=0;
%}
%%
[0-9] num++; ECHO;
%%
main(void)
{
yyin= fopen("practical10.txt","r"); yylex();
printf("\n\t%d digits", num);
}
int yywrap()
{
return(1);
}
