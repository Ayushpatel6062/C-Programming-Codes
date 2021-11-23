#include<stdio.h>
int main()
{	int a,b,c;
	printf("Enter the 1st Side: ");
	scanf("%d",&a);
	printf("Enter the 2nd Side: ");
	scanf("%d",&b);
	printf("Enter the 3rd Side: ");
	scanf("%d",&c);
	if(a+b>c && b+c>a && c+a>b)
		{	printf("It is a Valid Triangle");
		}
	else 
		{	printf("It is not a Valid Triangle");
		}
	return 0;
}
