%{
int vow_count= 0; int const_count
=0;
%}
%%
[aeiouAEIOU] {vow_count+
+;} [a-zA-Z] {const_count++;}
%%
main()
{
yyin= fopen("practical8.txt","r"); yylex();
printf("The number of vowels are: %d\n",vow_count); printf("The number of consonants are:
%d\n",const_count); return 0;
}
yywrap()
{
return 1;