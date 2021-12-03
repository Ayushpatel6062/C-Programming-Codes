#include<stdio.h>
int main()
{	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}

/*
i=1 --> j=1111
i=2 --> j=2222
i=3 --> j=3333
i=4 --> j=4444
*/
