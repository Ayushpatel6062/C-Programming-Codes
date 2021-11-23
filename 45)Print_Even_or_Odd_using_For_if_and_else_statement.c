#include<stdio.h>
int main()
{	int a,i;
	printf("Enter the number: ");
	scanf("%d",&a);
	/*for(i=1;i<=a;i+=2)
	{
		printf("\n\t%d is Odd\t %d is even",i,i+1);
	}*/ // This is Alternate Way to do this code(above one) but it will not work if my input is 9.
	for(i=1;i<=a;i++)
	{	
		if(i%2==0)
		{	
			printf("\t%d is Even",i);
		}
		else
		{
			printf("\n%d is Odd",i);
		}
	}
	return 0;
}
