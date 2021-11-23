/*Program to determine sum of 1/1! + 1/2! + 1/3! ... + 1/n!*/
#include<stdio.h>
int main()
{	int a,i,b=0,fact=1;
	float c,d=0,e;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		//printf("%d",i);
		fact=i*fact;
		b+=fact;
		e=fact;
		c=1/fact;
		d+=c;
	}
	printf("%d\n",b);
	printf("%.2f\n",d);
	return 0;
}
