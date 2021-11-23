#include<stdio.h>
int main()
{	char a;
	printf("Enter a charcter: ");
	scanf("%c",&a);
	
	if (a>=65 && a<=90)
	{	printf("It is an upper case character");
	}
	else if (a>=97 && a<=122)
	{	printf("It is lower case character");
	}
	else
	{	printf("It is neither upper case nor lower case character");
	}
	return 0;
}
