#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("1.txt", "r+");
	int pos_int_count = 0, neg_int_count=0, vowel_count = 0, consonant_count = 0, i;
	char str[50];
	if(fp == NULL)
	{
		printf("File Failed to Open..");
	}
	else
	{
		while(!feof(fp))
		{
			fgets(str, 50, fp);
		}
		for(i=0; i<50; i++)
		{
			if(str[i]>='0' && str[i]<='9')
				pos_int_count++;
			else if(str[i] == '-' && (str[i+1]>='1' && str[i+1]<='9'))
			{
				neg_int_count++;
				i++;
			}
			else
			{
				if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
				{
					if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
						vowel_count++;
					else
						consonant_count++;
				}
			}
		}
		printf("Pos_Integer-%d, Neg_Integer-%d, Vowel-%d, Consonant-%d", pos_int_count, neg_int_count, vowel_count, consonant_count);
	}
	fclose(fp);
	return 0;
}
