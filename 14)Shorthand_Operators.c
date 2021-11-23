#include<stdio.h>
int main()
{	int a=5,b=6,c,d;
	a+=b;
	printf("a+b=%d",a); // a=a+b
	a=5;
	a-=b;
	printf("\na-b=%d",a); // a=a-b
	a=5,b=6;
	a*=b;
	printf("\na*b=%d",a); // a=a*b
	a=5,b=6;
	a/=b;
	printf("\na/b=%d",a); // a=a/b
	a=5,b=6;
	a%=b;
	printf("\na%%b=%d",a); // a=a%b
	c=a++;
	printf("\nc:%d||a:%d",c,a);
	d=++a;
	printf("\nc:%d||a:%d",d,a);
	a=5,b=6;
	c=a--;
	printf("\nc:%d||a:%d",c,a);
	d=--a;
	printf("\nc:%d||a:%d",d,a);
	// +=,-=,*=,/=,%=,++,-- are shorthand operators
}
