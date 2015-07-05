/* program that replaces tabs in the input with the proper number of blanks to space to the next tab stop.*/
#include<stdio.h>
void tabtospace(char str[]);
int i;
main()
{
extern int i;
int j=0,tabstop=5,tab=0;
char c,array[1000],x=9,y=32;
printf("\nEnter input:\n\n");

while((c=getchar())!=EOF)
	{
	if(c == x)
		{
		tab++;
		i++;
		
		if(tab == tabstop){		
			
			array[i]=y;
			tab=0;
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

