%{
#include<stdio.h> int line_number = 1;
%}
line .*\n
%%
{line} { printf("%d %s", line_number++, yytext); }
%%
int yywrap(){} int main()
{
extern FILE *yyin; yyin=fopen("add.txt","r"); if(yyin==NULL){
printf("File Not Found");
}
yylex(); return 0;

Add.txt FILE #include<stdio.h> int main()
{
int a=10,b=20; int c=a+b;
printf("Addition of a and b is:%d",c); return 0;
}