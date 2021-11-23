/* Program to determine factorial of a number*/
#include<stdio.h>
int main()
{	int a,i,fact=1;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		//printf("%d",i);
		fact=i*fact;
	}
	printf("%d! is %d",a,fact);
	return 0;
}
