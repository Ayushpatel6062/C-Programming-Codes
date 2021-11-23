#include<stdio.h>
int main()
{	int p,t; 
	float r;
	printf("Enter the Principle Amount: ");
	scanf("%d",&p); // '&' is an Address Operator (Location of variable)
	printf("Enter the Rate of Interest: ");
	scanf("%f",&r);
	printf("Enter the Time: ");
	scanf("%d",&t);
	printf("Simple Interest for the following data is %.0f", (p * r * t)/100 );
}
