//Q.No.1 WAP to read the number of comment lines from a file

# include <stdio.h> 
# include <string.h> 

int main( ) 
{ 
			FILE *fp1, *fp2 ; 
			int single=0,multi=0;
		 char ch[100];
	
	  fp1 = fopen("sample.c", "r+") ; 
	  fp2 = fopen("1.txt", "w+");
	  if ( fp1 == NULL  && fp2 == NULL ) 
	  { 
		     printf( " failed to open." ) ; 
	  } 
	  else
	  { 
			    fscanf(fp1,"%s",ch);

		     while(!feof(fp1))
		     {
		         if(strstr(ch,"//"))
			            single++;
           if(strstr(ch,"/*"))
			            multi++;
	          fscanf(fp1,"%s",ch);	
											fputs(ch, fp2);
	     	}

		     printf("single %d and Multi %d",single,multi);

		     fclose(fp1);
		     fclose(fp2); 
		
	  } 
	  return 0;		 
} 

