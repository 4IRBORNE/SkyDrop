%{
	#include<stdio.h>
	#include<stdlib.h>
	int vowels = 0;
	int cons = 0;
%}
%%
[aeiouAEIOU] {vowels++;}
[a-zA-z] {cons++;}
%%
	int yywrap()
	{
		return 1;
	}
	
	int main()
	{
		char string[100];
		printf("Enter string..\n");
		fgets(string,sizeof(string),stdin);
		yy_scan_string(string);
		yylex();
		printf("No. of vowels = %d \nNo. of consonants = %d \n", vowels, cons);
		return 0;
	}
