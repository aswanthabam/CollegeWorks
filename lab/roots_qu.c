/*
 PROGRAM TO FIND ROOTS OF A QUADRATIC EQUATION
*/
#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c, d,r1,r2,img,real;
	printf("Enter values(a,b,c) : ");
	scanf("%f %f %f",&a,&b,&c);
	d = (b*b) - (4*a*c); // EQUATION TO FIND DISCRIMINANT
	if(d == 0)
	{
		// ROOTS ARE REAL AND EQUAL
		r1 = -b/(2*a);
		r2 = -b/(2*a);
		printf("Roots are real and equal\n");
		printf("Root 1 = %f\nRoot 2 = %f\n",r1,r2);
	}
	else if(d < 0)
	{
		// ROOTS ARE IMAGINARY
		img = sqrt(-d)/(2*a);
		real = -b/(2*a);
		printf("Roots are imaginary\n");
		printf("Root 1 = %f + i %f\n",real,img);
		printf("Root 2 = %f - i %f\n",real,img);
	}
	else
    {
    	// ROOTS ARE REAL AND DIFFERENT
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("Roots are real and different\n");
		printf("Root 1 = %f\n",r1);
		printf("Root 2 = %f\n",r2);
    }
	return 0;
}