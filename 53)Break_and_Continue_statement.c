#include<stdio.h>
int main()
{	int a,b,i;
	for(i=1;i<10;i++)
	{
		//continue;
		printf("\n%d",i);
		if(i%2==0)
			{
				//break;       // Break statement moves out of the 'for' loop(in this case)
				continue;  
				
				/*Continue statement moves out of the current iteration (in this case 'if statement' as well as the 
				next printf statement)......It skips to for loop for next i++.*/
			}
		printf("\t*");
	}
}
