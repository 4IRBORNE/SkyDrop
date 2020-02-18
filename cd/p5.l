%{
	#include<stdio.h>
	int p=0, s=0;
%}
%%
"scanf" {s++; fprintf(yyout,"readf");}
"printf" {p++; fprintf(yyout,"writef");}
%%
int yywrap()
{
	return 1;
}
int main()
{
	yyin=fopen("a.c","r");
	yyout=fopen("b.c","w");
	yylex();
	printf("\n Number of scanf statements: %d", s);
	printf("\n Number of printf statements: %d", p);
	return 0;
}
