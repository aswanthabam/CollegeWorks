/*
 Program to print all prime numbers b/w two given numvers
 Author : Aswanth V C
*/
#include<stdio.h>

int main()
{
	int l1,l2,flag; // lower limit, upper limit and a flag variable
	
	printf("Enter limit: ");
	scanf("%d %d",&l1,&l2);
	// Loop.through the range
	for(int i = l1;i <= l2;i++)
	{
	   flag = 0; 
	   if(i == 1) continue; // If the number is one skips to the next iteration
	   // Loop b/w 2 and the number - 1 and divide the number with it 
	   // if any number gives the reminder 0. then the number is not prime hence set the flag to 1
	   for(int j = 2;j < i;j++)
	   {
	       if(i % j == 0)
	       {
	           flag = 1;
	           break;
	       }
	   }
	   if(flag == 0) printf("%d ,",i); // Print number if the flag is 0
	}
	printf("\n\a");
	return 0;
}