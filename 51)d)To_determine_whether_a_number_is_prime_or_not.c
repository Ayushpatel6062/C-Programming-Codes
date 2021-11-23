/* d)Program to determine that number is prime or not */
#include<stdio.h>
int main()
{	int a,i,c=0;
	printf("Enter a number : ");
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	{
    	if(a%i==0)
    	{
			printf("%d is not prime",a);
			break;
		}
	}
		if(i>a/2)
			{
 			   	printf("%d is prime",a);
			}
	return 0;
}
