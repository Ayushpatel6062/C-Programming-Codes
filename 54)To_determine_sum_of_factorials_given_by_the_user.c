/*Program to determine sum of 1! + 2! + 3! ... + n!*/
#include<stdio.h>
int main()
{	int a,i,fact=1,b=0;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		//printf("%d",i);
		fact=i*fact;
		b+=fact;
	}
	printf("%d",b);
	return 0;
}
