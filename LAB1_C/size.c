// PROGRAM TO FIND SIZE AND RANGE OF DATATYPES
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() 
{
    // SIZE OF DATA TYPES
    printf("Size of Int is %ld bytes\n",sizeof(int));
    printf("Size of Char is %ld bytes\n", sizeof(char));
    printf("Size of float is %ld bytes\n",sizeof(float));
    printf("Size of Double is %ld bytes\n",sizeof(double));
    printf("Size of Long Int is %ld bytes\n\n",sizeof(long));
    // RANGE OF DATA TYPES
    printf("Range of Int is from %d to %d\n", INT_MIN,INT_MAX);
    printf("Range of Char is from %d to %d\n", CHAR_MIN,CHAR_MAX);
    printf("Range of Float is from %.10e to %.10e\n", FLT_MIN,FLT_MAX);
    printf("Range of Double is from %.10e to %.10e\n", DBL_MIN,DBL_MAX);
    printf("Range of Long Int is from %ld to %ld\n",LONG_MIN,LONG_MAX);
    return 0;
}
