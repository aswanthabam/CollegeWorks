/*
 PROGRAM TO PRINT ALL PRIME NUMBERS BETWEEN ANY TWO GIVEN LIMITS.
*/
#include<stdio.h>

int main()
{
	int low,high,flag;
	
	printf("Enter limit: ");
	scanf("%d %d",&low,&high);
	printf("Prime numbers between %d and %d are: ", low, high);
	for(int i = low;i <= high;i++)
	{
	   flag = 0; 
	   if(i <= 1) continue; // Correction
	   for(int j = 2;j < i/2;j++)
	   {
	       if(i % j == 0)
	       {
	           flag = 1;
	           break;
	       }
	   }
	   if(flag == 0) printf("%d ",i);
	}
	printf("\n");
	return 0;
}