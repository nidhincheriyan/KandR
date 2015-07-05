/*  program that replaces strings of blanks by the minimum number of spaces and blanks to achieve the same spacing*/
#include<stdio.h>
void tabtospace(char str[]);
int i;
main()
{
extern int i;
int j=0,spacestop=5,space=0;
char c,array[1000],x=9,y=32;
printf("\nEnter input:\n\n");

while((c=getchar())!=EOF)
	{
	if(c == y)
		{
		space++;
		i++;
		
		if(space == spacestop){		
			
			array[i]=x;
			space=0;
			}
		else{

			array[i]=c;
			}
		}
	else
		{
		i++;
		array[i]=c;
		
		}

	}
printf("\nAfter replacement  :\n\n");
tabtospace(array);
return 0;
}
void tabtospace(char str[])
	{
extern int i;
	int j;
	for(j=0;j<=i;j++)
			{
			printf("%c",str[j]);
			}
		printf("\n");
		
	}

