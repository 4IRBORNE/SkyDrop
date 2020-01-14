#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char data[50];
	printf("Enter the string \n");
	scanf("%[^\n]s",data);
	fp = fopen("1.txt","w+");
	if(fp == NULL)
		printf("File Pointer failed to open...");
	else
	{
		printf("File is open for writing..");
		if(strlen(data) > 0)
		{
			fputs(data, fp);
			fputs("\n", fp);
		}
		fclose(fp);
		printf("Data is successfully written and file is closed...");	
	}
	return 0;
}
