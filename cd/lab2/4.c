#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1, *fp2;
	fp1 = fopen("3.txt", "r+");
	fp2 = fopen("4.txt", "w+");
	char str[50], ch;
	int i;
	
	if(fp1 == NULL && fp2 == NULL)
		printf("File Failed to open..");
	else
	{
		while(!feof(fp1))
		{
			fgets(str, 50, fp1);
		}
		for(i=0; i<50; i++)
		{
			if(str[i]>='0' && str[i]<='9')
			{
				if(str[i]=='0' || str[i]=='2' || str[i]=='4' || str[i]=='6' || str[i]=='8')
				{
					fputc(str[i],fp2);
					printf("%c\t", str[i]);
				}
			}
		}
		printf("\n Written in File successfully..");
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
