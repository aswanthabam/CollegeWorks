#include<stdio.h>
#include<limits.h>

int main()
{
	int a;
	float b;
	double c;
	char d;

	long e;
	long double f;
	short g;

	unsigned int h;

	printf("Size of data types\n Int :- %d",sizeof(a));
	printf("\n Float :- %d",sizeof(b));
	printf("\n Double :- %d",sizeof(c));
	printf("\n Char :- %d",sizeof(d));
	printf("\n Long int :- %d",sizeof(e));
	printf("\n Short int :- %d",sizeof(f));
	printf("\n Long double :- %d",sizeof(g));
	printf("\n Unsigned int :- %d",sizeof(h));
	
	printf("\nRange of data types\n Int : %ld to %ld",INT_MIN,INT_MAX);
	printf("\n Float : %ld to %ld",FLT_MIN,FLT_MAX);
	printf("\n Double : %ld to %ld",DBL_MIN,DBL_MAX);
	printf("\n Char : %ld to %ld",CHAR_MIN,CHAR_MAX);
	printf("\n Long int : %ld to %ld",LONG_MIN,LONG_MAX);
	printf("\n Short int : %ld to %ld",SHRT_MIN,SHRT_MAX);
	printf("\n Long Double : %ld to %ld",LDBL_MIN,LDBL_MAX);
	printf("\n Unsigned int : %ld to %ld",0,UINT_MAX);
	
	return 0;
}
