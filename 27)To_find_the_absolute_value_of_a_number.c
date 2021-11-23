#include<stdio.h>
int main()
{	int a,b;
	printf("Enter the number: ");
	scanf("%d",&a);
	if (a>=0)
	{	printf("Absolute Value of %d is %d",a,a);
	}
	else
	{	printf("Absolute Value of %d is %d",a,-a);
	}
	return 0;
}
