/*program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.*/
#include<stdio.h>
main()
{int i=0,flag=0,set=0,j=0;
char c,t=9,s=32,e=10,array[1000],x;
while((c=getchar())!=EOF)
	{
	if(c!=t && c!=s )
		{
		if(c==e)
			{
			if(set==0)
				{
				set=1;	
				i++;
				array[i]=c;
				
				}
			}
		else{
		set=0;
		i++;
		array[i]=c;
		
		}}
	
	}
printf("\nAfter removing tab,space and blank lines\n");
printf("\n----------------------------------------\n");
for(j=0;j<=i;j++)
	{
	printf("%c",array[j]);
	}

}

