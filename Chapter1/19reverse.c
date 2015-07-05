/*program that reverses its input a line at a time using function.*/
#include<stdio.h>
void strrev(char str[],int i);
main()
{int i=0,j=0;
char c,array[1000],x=10;
printf("\nEnter input:\n\n");

while((c=getchar())!=EOF)
	{
	if(c != x)
		{
		i++;
		array[i]=c;
		}
	else
		{
		strrev(array,i);
		i=0;
		}

	}
return 0;
}
void strrev(char str[],int i)
	{
	int j;
	for(j=i;j>=0;j--)
			{
			printf("%c",str[j]);
			}
		printf("\n");
		
	}

