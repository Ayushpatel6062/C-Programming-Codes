#include<stdio.h>
int main()
{	char a;
	printf("Enter the Upper Case character: ");
	scanf("%c",&a);
	//printf("ASCII for %c is %d",a,a);
	a=a+32;
	printf("The Lower Case is %c",a);
	return 0;
}
