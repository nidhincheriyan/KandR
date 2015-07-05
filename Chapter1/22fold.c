/* program to ``fold'' long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input.*/
#include<stdio.h>
main()
{

char c,x=9,y=32,z=10,count=0,flag=0;
printf("\nEnter input:\n\n");

while((c=getchar())!=EOF)
	{
	
	if(flag==0)
		{
	if(count == 15)
		{
		if(c!=x && c!=y )
			{
			putchar(c);
			flag=0;
			}
		else{
			
			putchar(z);
			count=0;
	
			}
		}
	else
		{
		putchar(c);
		count++;
		}
	
	}
}
}


