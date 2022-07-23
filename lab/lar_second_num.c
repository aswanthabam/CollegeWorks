/*
 Program to accept three numbers and find largest and second largest numbers
*/
#include<stdio.h>

int main()
{
	int a,b,c;
	int lar,sec;
	printf("Enter Three Numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if((a > b) && (a > c))
	{
		printf("Largest number is : %d\n",a);
		if(b > c) printf("Second Largest number is : %d\n",b);
		else printf("Second Largest number is : %d\n",c);
	}
	else if((b > a) && (b > c))
	{
		printf("Largest number is : %d\n",b);
		if(a > c) printf("Second Largest number is : %d\n",a);
		else printf("Second Largest number is : %d\n",c);
	}
	else if((c > a) && (c > b))
	{
		printf("Largest number is : %d\n",c);
		if(a > b) printf("Second Largest number is : %d\n",a);
		else printf("Second Largest number is : %d\n",b);
	}
    
	return 0;
}