#include<stdio.h>
int main()
{	int r;
	float area,circumference;
	const float PI = 3.14;  // 'const' is used to assign any value throughtout the program. You cannot change it!!
	printf("Enter the radius of circle: ");
	scanf("%d",&r);
	area = PI * r * r;
	printf("Area of circle is %.2f sq. units",area );
	circumference = 2 * PI * r;
	printf("\nCircumference of Circle is %.2f units",circumference);
}
