#include<stdio.h>
#include<string.h>

void main()
{
	FILE *fp1, *fp2;
	fp1 = fopen("1.txt","r+");
	fp2 = fopen("2.txt","w+");
	char str[50];
	
	while(!feof(fp1))
	{
		fgets(str, 50, fp1);
	}
	fclose(fp1);
	if(fp2 == NULL)
		printf("File failed to open..");
	else
	{
		printf("File is open for writing..");
		if(strlen(str) > 0)
		{
			fputs(str, fp2);
			fputs("\n", fp2);
		}
		fclose(fp2);
		printf("Data is successfully written and file is closed...");	
	}
}
