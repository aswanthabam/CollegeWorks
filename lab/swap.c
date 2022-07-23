#include <stdio.h>
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Before Swapping: first number is: %d, second number is: %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After  Swapping: first number is: %d, second number is: %d\n",num1,num2);
    return 0;
}
