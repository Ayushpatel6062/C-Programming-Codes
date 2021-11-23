#include<stdio.h>
int main()
{	int a,i,m;
	printf("Enter a Number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("%d\n",i);
		m=m+i;
	}
	printf("Sum of above numbers is %d",m);	
	return 0;
}
