#include<stdio.h>
void main()
	{
	char c;
	char x=8,y=47;
	
	while((c=getchar())!=EOF)
		{
			
		if(c=='\t')
			{
			printf("\\t");
			}
		else if(c==x)
			{
			printf("%c",x);
			}
		else if(c==47)
			{
			printf("%c%c",y,y);
			}
		else
			{
			putchar(c);
			}
		}
	
	}
