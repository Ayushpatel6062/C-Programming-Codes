#include<stdio.h>
#include<math.h>
int main()
{   float area,a,b,c,sp;
    printf("Enter side a:");
    scanf("%f",&a);
    printf("Enter side b:");
    scanf("%f",&b);
    printf("Enter side c:");
    scanf("%f",&c);
    sp = (a+b+c)/2;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("\nThe area of Triangle is %.1f square units",area);
    return 0;
}
