#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() 
{
    printf("Size of Char is %ld bytes\n", sizeof(char));
    printf("Range of Char is from %d to %d\n\n", CHAR_MIN,CHAR_MAX);
    printf("Size of Int is %ld bytes\n",sizeof(int));
    printf("Range of Int is from %d to %d\n\n", INT_MIN,INT_MAX);    
    printf("Size of Long Int is %ld bytes\n",sizeof(long));
    printf("Range of Long Int is from %ld to %ld\n\n",LONG_MIN,LONG_MAX);    
    printf("Size of Short Int is %ld bytes\n",sizeof(short));
    printf("Range of Short Int is from %d to %d\n\n", SHRT_MIN,SHRT_MAX);
    printf("Range of Unsigned Short Int is from 0 to %d\n", USHRT_MAX);
    printf("Range of Unsigned Char is from 0 to %d\n", UCHAR_MAX);
    printf("Range of Unsigned Int is from 0 to %u\n", UINT_MAX);
    printf("Range of Unsigned Long Int is from 0 to %lu\n",ULONG_MAX);  
    return 0;
}
