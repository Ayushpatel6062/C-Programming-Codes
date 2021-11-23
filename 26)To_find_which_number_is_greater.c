#include<stdio.h>
int main()
{	int x,y;
	printf("Enter the 1st Number: ");
	scanf("%d",&x);
	printf("Enter the 2nd Number: ");
	scanf("%d",&y);
	if (x>y)
	{	printf("%d is greater than %d or %d>%d",x,y,x,y);
	}
	else
	{	printf("%d is greater than %d or %d>%d",y,x,y,x);
	}
	return 0;
}
