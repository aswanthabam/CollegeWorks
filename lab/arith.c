#include<stdio.h> 
int main()
{
    int a,b;
    char op;
    printf("Enter + , - , * , / or %% for addition, subtraction, multiplication, division or     modulus operator respectively\n");
    scanf("%c",&op);
    printf("Enter the numbers ");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+' : printf("Sum is %d",a+b);
                break;
        case '-' : printf("Difference is %d",a-b);
                break;
        case '*' : printf("Product is %d",a*b);
                break;
        case '/' : printf("Quotient is %d",a/b);
                break;
        case '%' : printf("Remainder is %d",a%b);
    }
    return 0;
}
