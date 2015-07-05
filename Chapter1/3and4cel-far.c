/*Conversion of Celcius to Fahrenheit*/
#include<stdio.h>
void main()
	{
	float cel,upper,lower,step,fahren;
	upper=148.0;
	lower=-17.8;
	step=11.0;

	printf("\nCELCIUS TO FAHRENHIET CONVERSION\n");
	printf("...................................");
	printf("\nCelcius\tFahrenheit");
	cel=lower;
	while(cel<=upper)
		{
		fahren=((9.0*cel)/5.0)+32.0;
		printf("\n%3.1f\t%6.0f",cel,fahren);
		cel=cel+step;
		}
	printf("\n");
	}
