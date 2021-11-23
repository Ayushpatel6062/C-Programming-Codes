#include<stdio.h>
int main()
{	int m,n,a;
	printf("Enter m:");
	scanf("%d",&m);
	printf("Enter n:");
	scanf("%d",&n);
	a=m%n;
	if (a==0)
	{	printf("%d is a factor of %d",m,n);
	}
	else 
	{	printf("%d is not a factor of %d",m,n);
	}
	return 0;
}
