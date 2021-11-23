/* b)Program to determine that number is prime or not */
#include<stdio.h>
int main()
{	int a,i,c=0,d;
	printf("Enter a number : ");
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	{
    	if(a%i==0)
    	{
			c++;
			break;
		}
	}
		if(c==0)
			{
 			   	printf("%d is prime",a);
			}
		else
			{
				printf("%d is not prime",a);
			}
	return 0;
}
