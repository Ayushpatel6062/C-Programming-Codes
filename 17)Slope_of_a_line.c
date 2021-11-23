#include<stdio.h>
int main()
{	int x1,y1,x2,y2,m;
	printf("Enter point A(x1,y1):");
	scanf("%d %d",&x1,&y1);
	printf("Enter point B(x2,y2):");
	scanf("%d %d",&x2,&y2);
	m=(y2-y1)/(x2-x1);
	printf("Slope of the line AB is %d ",m);
	return 0;
}
