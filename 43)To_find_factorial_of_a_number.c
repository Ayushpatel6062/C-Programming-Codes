#include<stdio.h>
int main()
{	int a,i,p;
	printf("Enter a Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		p=p*i;
	}
	printf("Factorial of %d number is %d",a,p);
	return 0;
}
