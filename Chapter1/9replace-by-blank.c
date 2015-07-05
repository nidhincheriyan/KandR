#include<stdio.h>
void main()
	{
	int c,k=1;
	while((c=getchar())!=EOF)
		{
			
		if(c!=' ')
			{
			putchar(c);
			k=1;
			}
		else
			{
			if(k==1)
				{
				putchar(c);
				++k;
				}
			}
		}
	}
