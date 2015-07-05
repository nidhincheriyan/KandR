/* program to remove all comments from a C program.*/
#include<stdio.h>
main()
{
int i=0,j,flag=0,p=0;
char c,x=10,array[50],y=32,z=47,count=0;



while((c=getchar())!=EOF)
	{
		if(c==z)
			{
			flag++;	
			}
	 if(flag == 1 || flag ==2)
			{
			if(c==x)
				{
				flag=0;
				
				}
			}
	
	else{
	array[j++]=c;
	
	
	}
	for(i=0;i<=j;i++){
		putchar(array[i]);
		}
	}

}
		






