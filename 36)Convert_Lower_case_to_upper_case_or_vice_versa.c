#include<stdio.h>
int main()
{	char a;
	printf("Enter a character: ");
	scanf("%c",&a);

	if (a>=65 && a<=90)
	{	printf("Lower case of %c is %c",a,a+32);
	}
	else if (a>=97 && a<=122)
	{	printf("Upper case of %c is %c",a,a-32);
	}
	else
	{	printf("Character entered is %c",a);
	}
	return 0;
}
