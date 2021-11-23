#include<stdio.h>
int main()
{ 	int l,b;
	printf("Enter the Length: ");
	scanf("%d",&l);
	printf("Enter the Breadth: ");
	scanf("%d",&b);
	printf("Area of Rectangle is %d sq units",l * b);
	printf("\nPerimeter of Rectangle is %d units", 2 * ( l + b ));
}
