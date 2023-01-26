// PROGRAM TO ACCEPT TWO NUMBERS AND PERFORM VARIOUS ARITHMETIC OPERATIONS [ +, -, *, / ] BASED ON THE SYMBOL ENTERED.
#include<stdio.h> 
int main()
{
    int a,b;
    char op;
    printf("Enter + , - , * , / or %% for addition, subtraction, multiplication, division or modulus operator respectively: \n");
    scanf("%c",&op);
    printf("Enter the numbers : ");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+' : printf("Sum is : %d\n",a+b);
                break;
        case '-' : printf("Difference is : %d\n",a-b);
                break;
        case '*' : printf("Product is : %d\n",a*b);
                break;
        case '/' : printf("Quotient is : %d\n",a/b);
                break;
        case '%' : printf("Remainder is : %d\n",a%b);
                break;
        default: printf("Invalid operator!\n");
    }
    return 0;
}
