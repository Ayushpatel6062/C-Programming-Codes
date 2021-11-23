#include<stdio.h>
int main()
{	int a,b,c,sum;
	printf("Enter 1st Angle: ");
	scanf("%d",&a);
	printf("Enter 2nd Angle: ");
	scanf("%d",&b);
	printf("Enter 3rd Angle: ");
	scanf("%d",&c);
	sum=a+b+c;
	if(sum==180)
	{	printf("It is a Valid Triangle");
			if(a<90 && b<90 && c<90)
			{	printf("\nIt is an Acute Angle Triangle");
			}
			else if(a==90 || b==90 || c==90)
			{	printf("\nIt is a Right Angle Triangle");
			}
			else
			{	printf("\nIt is an Obtuse Angle Triangle");
			}
	}
	else
	{	printf("It is not a Valid Triangle");
	}
	return 0;
}
