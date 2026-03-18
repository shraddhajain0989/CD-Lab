
#include
<stdio.h> #include
<stdlib.h> int yylex(void);
int yyerror(const char *s);

%}

%token HI BYE

%%


program:
hi bye
;

h i
H:I	{ printf("Hello World\n"); }
;

BYb E	{ printf("Bye World\n"); exit(0); }
; y e
:
