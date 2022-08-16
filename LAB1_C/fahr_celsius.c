// PROGRAM TO CONVERT FAHRENHEIT TO CELSIUS 
#include<stdio.h>
int main()   
{ 
	float fahrenheit, celsius;
	printf("Enter The Temperature in Fahrenheit : ");
	scanf("%f",&fahrenheit);
	celsius = ((fahrenheit-32)*5)/9; // EQUATION TO CONVERT 
	printf("\n\nTemperature in Celsius is : %f Degrees",celsius);  
	return 0;  
}
