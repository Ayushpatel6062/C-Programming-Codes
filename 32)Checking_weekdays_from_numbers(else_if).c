#include<stdio.h>
int main()
{	int a;
	printf("Enter a number between 1 to 7: ");
	scanf("%d",&a);
	
	if (a==1)
		{	printf("Its Monday");
		}
	else if (a==2)
		{	printf("Its Tuesday");
		}
	else if (a==3)
		{	printf("Its Wednesday");
		}
	else if (a==4)
		{	printf("Its Thursday");
		}
	else if (a==5)
		{	printf("Its Friday");
		}
	else if (a==6)
		{	printf("Its Saturday");
		}
	else if (a==7)
		{	printf("Its Sunday");
		}
	else
		{	printf("Enter a Valid input from 1 to 7");
		}
	return 0;
}
