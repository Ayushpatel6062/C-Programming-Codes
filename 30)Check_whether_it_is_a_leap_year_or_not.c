#include<stdio.h>
int main()
{	int a,b;
	printf("Enter a year:");
	scanf("%d",&a);
	b=a%4;
	if(b==0)
		{	printf("It is a Leap Year");
		}
	else
		{	printf("It is not a Leap Year");
		}
	return 0;
}
