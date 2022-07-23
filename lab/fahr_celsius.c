/*
 Program to convert farhenheite to celsius
 Author : Aswanth V C
*/
#include<stdio.h>

int main()
{
	float far,cel; // Variable to store farhenheite and celsius
	printf("Enter temperature in farhenheite: "); 
	scanf("%f",&far); // Get farhenheite as input
	cel = (far-32)*(5.0/9); // calculate celsius
	
	printf("Temprature in celsius is %f\n",cel); // Display
	return 0;
}