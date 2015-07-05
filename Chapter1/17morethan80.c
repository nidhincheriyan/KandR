#include <stdio.h>
#define MAXLINE 1000
int x = 0,y=0;
int getline1(char line[], int maxline);
void copy(char to[], char from[]);
	main()
	{
		int len=0;
		int max;
		char line[MAXLINE];
		char longest[MAXLINE];

		while((len = getline1(line, MAXLINE)) > 0)
			{if (len > 8) {
				copy(longest, line);
				}
			}
		printf("\nThe lines that are longer than 8 characters");
		printf("\n------------------------------------------");
		printf("\n\n%s\n\n", longest);
		return 0;
	}


int getline1(char s[],int lim)
	{
	int c, i;

	for (i=0; i < lim-1 && (c=getchar())!=EOF; ++i)
		{
		if (c == '\n') {
			s[i] = '\0';	
			break;
			}
		else{
			if(c!=' ' )s[i] = c;
			else{
				s[i] = ' ';
				}
	           }
		}
	return i;
	}

void copy(char to[], char from[])
	{
	//int i;
	
	while ((to[x] = from[y]))
	{++x;++y;}
	y=0;
	to[x++]='\n';
	}
