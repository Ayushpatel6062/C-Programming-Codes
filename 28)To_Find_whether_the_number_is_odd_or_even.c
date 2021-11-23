#include<stdio.h>
int main()
{   int a,b=2,c;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a%b;
    
	if (c==0)
        {   
			if(a==0)
            	printf("%d is zero",a);
            else
            	printf("It is an even number");
    	}
    
	else
	
        {   printf("It is an odd number");
    	}
    return 0;
}
