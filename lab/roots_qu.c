/*
 Program to find roots of quadratic equation
 Author : Aswanth V C
*/
#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c, d,r1,r2,img,real;
	printf("Enter coefficients : ");
	scanf("%f %f %f",&a,&b,&c);
	
	d = (b*b) - (4*a*c);
	if(d == 0)
	{
		// Have one root -b/2a
		r1 = -b/(2*a);
		printf("Have one root\nRoot = %f\n",r1);
	}
	else if(d < 0)
	{
		// Have two roots and roots are complex numbers
		img = sqrt(-d)/(2*a);
		real = -b/(2*a);
		printf("Have two roots and roots are complex\n");
		printf("Root 1 = %f + i %f\n",real,img);
		printf("Root 2 = %f - i %f\n",real,img);
	}
	else
    {
    	// Have two roots
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("Have two roots\n");
		printf("Root 1 = %f\n",r1);
		printf("Root 2 = %f\n",r2);
    }
	return 0;
}