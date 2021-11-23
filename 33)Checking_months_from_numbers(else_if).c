#include<stdio.h>
int main()
{	int a;
	printf("Enter a number between 1 to 12: ");
	scanf("%d",&a);
	
	if(a==1)
	{	printf("Its January");
	}
	else if(a==2)
	{	printf("Its February");
	}
	else if(a==3)
	{	printf("Its March");
	}
	else if(a==4)
	{	printf("Its April");
	}
	else if(a==5)
	{	printf("Its May");
	}
	else if(a==6)
	{	printf("Its June");
	}
	else if(a==7)
	{	printf("Its July");
	}
	else if(a==8)
	{	printf("Its August");
	}
	else if(a==9)
	{	printf("Its September");
	}
	else if(a==10)
	{	printf("Its October");
	}
	else if(a==11)
	{	printf("Its November");
	}
	else if(a==12)
	{	printf("Its December");
	}
	else 
	{	printf("Enter a valid input between 1 and 12.");
	}
	return 0;
}
