/*program to count blanks, tabs, and newlines.*/
#include<stdio.h>
void main()
	{
	int c;
	long blank=0,newline=0,tab=0;
	while((c=getchar())!=EOF)
		{
		if(c == ' ')
			++blank;
		if(c == '\n')
			++newline;
		if(c == '\t')
			++tab;
		}
	printf("The Given input consists of %ld blanks, %ld newline and %ld tab characters",blank,newline,tab);
	}
