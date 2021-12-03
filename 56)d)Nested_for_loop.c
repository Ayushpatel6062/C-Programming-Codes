#include<stdio.h>
int main()
{	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=65;j<=68;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}

/*
i=1 --> j=A B C D
i=2 --> j=A B C D
i=3 --> j=A B C D
i=4 --> j=A B C D
*/
