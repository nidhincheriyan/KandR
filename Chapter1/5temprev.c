/*Conversion of Fahrenheit to Celcius in reverse order */
#include<stdio.h>
void main()
	{
	int fahren;
	float cel;
	
	printf("\nFahrenheit to Celcius Conversion in reverse order\n");
	printf("................................................");
	printf("\nFAHRENHEIT \t CELCIUS");
	for(fahren=300; fahren>-17; fahren=fahren-20 )
		{
		cel= 5.0*(fahren-32)/9.0;
		printf("\t\n%3d\t\t%6.1f",fahren,cel);
		}
	printf("\n");
	}
