#include<stdio.h>
#include<math.h>
int main()
{	int x1,x2,y1,y2,a,b,c,d,e,f;
	float distance;
	printf("Enter (x1,y1):");
	scanf("%d %d",&x1,&y1);
	printf("Enter (x2,y2):");
	scanf("%d %d",&x2,&y2);
	c=x2-x1;
	//printf("c=%d",c);
	d=y2-y1;
	//printf("\nd=%d",d);
	e=pow(c,2);
	//printf("\ne=%d",e);
	f=pow(d,2);
	//printf("\nf=%d",f);
	e+=f;
	//printf("\ne=%d",e);
	distance=sqrt(e);
	printf("Distance between two points: %.2f units",distance);
	return 0;
}
