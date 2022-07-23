// PROGRAM TO COUNT AND DISPLAY THE DIFFERENT VOWELS IN A LINE OF TEXT
#include <stdio.h>
int main()
{
	int c = 0, count = 0;
	char s[80];
	printf("Input a string: ");
	scanf("%[^\n]s",s);
	printf("The vowels are:- \n");

	while (s[c] != '\0') 
	{
		if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
		{    
			printf("%c ",s[c]);
			count++;
		}
		c++;
	}
	printf("\nNumber of vowels in the string: %d\n", count);
	return 0;
}
