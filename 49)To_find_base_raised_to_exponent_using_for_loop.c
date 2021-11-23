/* Program To find Base raised to Exponent using FOR loop */
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,power,c;
	printf("Enter the number of values to be displayed:");
	scanf("%d",&c);
	/*printf("Enter base value:");
	scanf("%d",&a);
	printf("Enter exponent value:");
	scanf("%d",&b);*/
	for(i=1;i<=c;i++)
	{	
		printf("Enter base value:");
		scanf("%d",&a);
		printf("Enter exponent value:");
		scanf("%d",&b);
		power = pow(a,b);
		printf("Answer = %d\n",power);
		//break;
	}
	return 0;
}
