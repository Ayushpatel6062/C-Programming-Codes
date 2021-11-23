/* a)Program to determine that number is prime or not */
#include<stdio.h>
int main()
{	int a,i,b,answer=0;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("The factors are:");
	for(i=1;i<=a;i++)
	{
		b=a%i;
		if(b==0)
		{
			printf(" %d",i);
			answer+=1; //We can write answer+=1 or answer++ or answer=answer+1
			//printf("\t%d",answer);
		}	
	}
	printf("\nTotal factors are %d",answer);
	if(answer==2)
	{
		printf("\n%d is a Prime Number",a);
	}
	else
	{
		printf("\n%d is not a Prime Number",a);
	}
	return 0;
}
