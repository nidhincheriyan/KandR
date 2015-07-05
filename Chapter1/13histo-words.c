#include<stdio.h>
//#define WORD 1
void main()
	{
	int c,i=0,k,j=0,count=0,flag=1,p=11,q=7,col;
	char histo[15][15];
	char wcount[15]={'t','n','u','o','C','|','^'};
	for(k=0;k<15;k++)
		{
		for(j=0;j<15;j++)
			{
			histo[k][j]=' ';
			}
		
		
		}	
	while((c=getchar()) != EOF)
		{
			if(c==' ' || c== '\n' || c=='\t')
			{ 
				if(flag==0)
					{count++;	
					histo[i++][count]='\0';
					i=0;
					flag=1;
					}
				
			}
		else
			{
				histo[i++][count]='|';
				flag=0;
				
			}
		
		}
	col=count;
	printf("\t\t\tHistogram for Word Count\n");
	printf("\t\t\t........................\n");
	for(k=10;k>=0;k--)
		{
		printf("\t%c",wcount[q--]);
		printf("\t%d",p--);
		for(j=0,col=0;j<=10;j++)
		        {	
			printf("   %c",histo[k][j]);
			col++;			
			}
		
		printf("\n\n");
		}
	printf("\t\t%d",p--);
	for(k=1;k<=10;k++)
	printf("   %d",k);
	printf("\n\n\t\t\tW o r d    P o s i t i o n - >");
	printf("\n\n\n");

}
