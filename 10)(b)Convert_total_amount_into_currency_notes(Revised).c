#include<stdio.h>
int main()
{	int total_amount,two_thousand,five_hundred,two_hundred,hundred,fifty,twenty,ten,five,two,one,rem;
    printf("Enter Total Amount:");
    scanf("%d",&total_amount);
    two_thousand=total_amount/2000; // 9798/2000-->4
    rem=total_amount%2000; // 9798%2000-->1798
    five_hundred=rem/500; //1798/500-->3
    rem%=500; //1798%500-->298
    two_hundred=rem/200; //298/200-->1
    rem%=200; //298%200-->98
    hundred=rem/100; //98/100-->0
    rem%=100; //98%100-->98
    fifty=rem/50; //98/50-->1
    rem%=50; //98%50-->48
    twenty=rem/20; //48/20-->2
    rem%=20; //48%20-->8
    ten=rem/10; //8/10-->0
    rem%=10; //8%10-->8
    five=rem/5; //8/5-->1
    rem%=5; //8%5-->3
    two=rem/2; //3/2-->1
    rem%=2; //3%2-->1
    one=rem; //1/1-->1
    printf("2000 Rs= %d\n500 Rs= %d\n200 Rs= %d\n100 Rs= %d\n50 Rs= %d\n20 Rs= %d\n10 Rs= %d\n5 Rs= %d\n2 Rs= %d\n1 Rs= %d",two_thousand,five_hundred,two_hundred,hundred,fifty,twenty,ten,five,two,one);
    printf("\nTotal Notes is/are: %d",two_thousand+five_hundred+two_hundred+hundred+fifty+twenty+ten+five+two+one);
    return 0;
}
