#include<stdio.h>
#include<math.h>
int main()
{	int principal,time;
	float compound_interest,a,b,c,rate,total_amt;
	printf("Enter the Amount:");
	scanf("%d",&principal);
	printf("Enter the Rate:");
	scanf("%f",&rate);
	printf("Enter the time (in Years):");
	scanf("%d",&time);
	a=1+(rate/100.0);
	//printf("a=%f",a);
	b=pow(a,time);
	//printf("\nb=%f",b);
	compound_interest=principal*b;
	printf("Compound Interest: Rs %.2f",compound_interest);
	total_amt=principal+compound_interest;
	printf("\nTotal Amount: Rs %.2f",total_amt);
	return 0;
}
