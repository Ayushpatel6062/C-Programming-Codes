#include<stdio.h>
int main()
{	int a,i,max=-999999; //integer's smallest value is 32768 for 16-bit but for 64 bit anything value is fine
	for(i=1;i<=5;i++)
	{
		printf("Enter a Number: ");
		scanf("%d",&a);
		
		if(a>max)
		{
			max=a;
		}
	}
	printf("%d is maximum",max);
	return 0;
}

