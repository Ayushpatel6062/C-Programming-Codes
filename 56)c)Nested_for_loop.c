#include<stdio.h>
int main()
{	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=65;j<=68;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

/*
i=1 --> j=65 66 67 68
i=2 --> j=65 66 67 68
i=3 --> j=65 66 67 68
i=4 --> j=65 66 67 68
*/
