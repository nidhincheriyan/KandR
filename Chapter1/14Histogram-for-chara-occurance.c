/*program to print the histogram of character occurance (vertical)*/

#include<stdio.h>
//#define WORD 1
void main()
	{
	int c,k,flag=1,i=0,j=0,count=0,p=0,q=0,occ=0,v=0,col=0,row=-1;
	char histo[15][15],x,y,visit[26],output[15][26];
	char occur[11]={'e','c','n','a','r','u','c','c','O'};
	printf("\nEnter the input strings :\n");
	for(k=0;k<15;k++)
		{
		for(j=0;j<15;j++)
			{
			histo[k][j]=' ';
			}
		
		
		}
	for(k=0;k<15;k++)
		{
		for(j=0;j<25;j++)
			{
			output[k][j]=' ';
			}
		
		
		}
	
			
	while((c=getchar()) != EOF)
		{
			if(c==' ' || c=='\t' || c=='\n')
			{ 
				if(flag==0)
					{count++;	
					//histo[count][i++]='\0';
					i=0;
					flag=1;
					}
				
			}
		else
			{
				histo[count][i++]=c;
				flag=0;
				
			}
		
		}

		
		
	for(k=0;k<15;k++)
		{
		for(j=0;histo[k][j]!='\0';j++)
			{occ=0;
			x=histo[k][j];
			
			if(x==' ')
			break;
			else{flag=0;
			
			for(i=0;i<=v;i++)
				{
				if(visit[i]==x)
					{	
					flag=1;
					}
				}
			if(flag==0)
				{row++;
				v++;
				visit[v]=x;
			
			for(p=0;p<15;p++)
				{
				for(q=0;histo[p][q]!='\0';q++)
					{
					y=histo[p][q];
					
					 if(x==y)
						{occ++;
						
						output[row][col++]='|';
						}
				
					}col=0;	
				}
			}
		
		}}
		
		}
	
	printf("\t\t\tHistogram for the Occurance of Letters\n");
	printf("\t\t\t..................................\n");
	p=9,q=12;
	for(k=11;k>=0;k--)
		{
		printf("\t%c",occur[p--]);
		printf("\t%d",q--);
		
		for(j=0;j<25;j++)
		        {
			if(output[j][k]==' ')break;
			else
				{	
				printf("   %c",output[j][k]);
				}
			}
		
		printf("\n");
		}
	
	printf("\t\t");
	for(i=1;i<=v;i++)
		{
		printf("    %c",visit[i]);
		}
	
	printf("\n\n\t\t\tL e t t e r s ->");
	printf("\n\n\n");

}
