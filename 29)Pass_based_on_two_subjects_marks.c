#include<stdio.h>
int main()
{   int a,b,c;
    printf("Enter the marks in subject 1:");
    scanf("%d",&a);
    printf("Enter the marks in subject 2:");
    scanf("%d",&b);
    printf("Enter the marks in subject 3:");
    scanf("%d",&c);
    
	if (a>=35 && b>=35 && c>=35) // '||' is OR OPERATOR, '&&' is AND OPERATOR
    	{ 
			printf("Pass");
		}
    
	else
    	{
			printf("Fail"); 
		}
    return 0;
}
