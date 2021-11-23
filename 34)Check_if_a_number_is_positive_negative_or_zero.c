#include<stdio.h>
int main()
{	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	if (a>0)
	{	printf("It is a Positive Number");
	}
	else if (a<0)
	{	printf("It is a Negative Number");
	}
	else
	{	printf("It is Zero");
	}
	return 0;
}
