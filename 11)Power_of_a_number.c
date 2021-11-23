#include<stdio.h>
#include<math.h>
int main()
{	int a,b,power;
	printf("Enter the base value:");
	scanf("%d",&a);
	printf("Enter the power value:");
	scanf("%d",&b);
	power = pow(a,b);
	printf("The answer is: %d",power);
}
