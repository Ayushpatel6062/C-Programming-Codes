#include<stdio.h>
#include<ctype.h>
int main()
{	char a;
	int result;	
	printf("Enter: ");
	scanf("%c",&a);
	
	result = isupper(a); // 'a' should be always character
	printf("Result: %d",result);
	return 0;
}

// Non-zero integer (x > 0) --> Argument is an uppercase alphabet.
// Zero (0) --> Argument is not an uppercase alphabet.
