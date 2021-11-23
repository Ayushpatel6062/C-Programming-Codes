#include<stdio.h>
int main()
{	int total_inches,inch,feet;
	printf("Enter Total Inches:");
	scanf("%d",&total_inches);
	feet = total_inches/12;
	inch = total_inches - feet*12;
	printf("Feet: %d\nInches: %d",feet,inch);
}
