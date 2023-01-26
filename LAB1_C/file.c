
// PROGRAM TO CREATE A FILE AND STORE SOME RECORDS IN IT. DISPLAY THE CONTENTS OF THE SAME.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char text[100];
	FILE *fptr;
	fptr = fopen("example.txt","w");
	if(fptr == NULL)
	{
		printf("Error!\n");   
		exit(1);             
	}
	printf("Enter content: ");
	scanf("%[^\n]s",text);
	fprintf(fptr,"%s",text);
	fclose(fptr);
	if ((fptr = fopen("example.txt","r")) == NULL){
		 printf("Error! opening file\n");
		 exit(1);
	}
	fscanf(fptr,"%[^\n]s", &text);
	printf("Content inside file:-\n%s", text);
	fclose(fptr); 
	return 0;
}