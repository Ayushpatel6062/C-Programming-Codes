#include<stdio.h>
int main()
{	int x,y;
	printf("Enter X Coordinate: ");
	scanf("%d",&x);
	printf("Enter Y Coordinate: ");
	scanf("%d",&y);
	if (x>0 && y>0)
		{	printf("Point (%d,%d) lies in 1st Quadrant",x,y);
		}
	else if (x<0 && y<0)
		{	printf("Point (%d,%d) lies in 4th Quadrant",x,y);
		}
	else if	(x>0 && y<0)
		{	printf("Point (%d,%d) lies in 2nd Quadrant",x,y);
		}
	else if	(x<0 && y>0)
		{	printf("Point (%d,%d) lies in 3rd Quadrant",x,y);
		}
	else 
		{	printf("Point (%d,%d) at Origin",x,y);
		}
	return 0;
}
