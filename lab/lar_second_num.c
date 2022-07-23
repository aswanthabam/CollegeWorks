/*
 Program to accept three numbers and find largest and second larget numbers
 Author : Aswanth V C
*/
#include<stdio.h>

int main()
{
	int a,b,c;
	int lar,sec;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if((a > b) && (a > c))
	{
		printf("a (%d) is largest\n",a);
		if(b > c) printf("b (%d) is second largest\n",b);
		else printf("c (%d) is second largest\n",c);
	}
	else if((b > a) && (b > c))
	{
		printf("b (%d) is largest\n",b);
		if(a > c) printf("a (%d) is second largest\n",a);
		else printf("c (%d) is second largest\n",c);
	}
	else if((c > a) && (c > b))
	{
		printf("c (%d) is largest\n",c);
		if(a > b) printf("a (%d) is second largest\n",a);
		else printf("b (%d) is second largest\n",b);
	}
    
	return 0;
}