/* program to check a C program for rudimentary syntax errors like unmatched parentheses, single quotes,double quotes, brackets and braces*/
#include<stdio.h>
main()
{
char c,array[50];
int brace=0,para=0,dq=0,sq=0,sqb=0;
int b=0,p=0,s=0,x=0;
int i=0,j;
while((c=getchar())!=EOF)
	{	
		array[i]=c;i++;
		
	}
for(j=0;j<=i;j++)
	{
	if(array[j]=='{')
		{
		brace++;
		}
	else if(array[j]=='}')
		{
		brace--;
		if(brace<0){b=1;}
		}
	else if(array[j]=='[')
		{
		sqb++;
		}
	else if(array[j]==']')
		{
		sqb--;
		if(sqb<0){s=1;}
		}
	else if(array[j]=='(')
		{
		para++;
		}
	else if(array[j]==')')
		{
		para--;
		if(para<0){p=1;}
		}
	else if(array[j]==39)
		{
		if(sq==0)
			{
			sq++;
			}
		else
			{
			sq--;			
			}
		}
	else if(array[j]==34)
		{
		if(dq==0)
			{
			dq++;
			}
		else
			{
			dq--;			
			}
		}
		
		
	}
	if(brace > 0 || b==1)
		{
		printf("\nBrace Mismatch ");
		x=1;
		}
	 if(para > 0 || p==1)
		{	
		printf("\nParanthesis Mismatch ");
		x=1;
		}
	 if(sq != 0)
		{	
		printf("\nSingle quote Mismatch ");
		x=1;
		}
	 if(dq != 0)
		{	
		printf("\nDouble Quote Mismatch ");
		x=1;
		}
	 if(sqb > 0 || s==1)
		{	
		printf("\nSquare bracket Mismatch ");
		x=1;
		}
	if(x==0)
		{
		printf("\nNo Syntax Error !");
		}
	
	printf("\n");
	return 0;
}
		






