#include<stdio.h>
int main()
{	char a;
	printf("Enter a character: ");
	scanf("%c",&a);
	//printf("ASCII value is %d",a);
	if (a>=65 && a<=90)
		{	printf("It is Upper Case character");
		}
	else
		{	printf("It is not Upper Case character");
		}
	return 0;
}
