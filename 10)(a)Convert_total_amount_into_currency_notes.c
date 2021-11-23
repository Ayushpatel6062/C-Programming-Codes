#include<stdio.h>
int main()
{	int total_amount,two_thousand,five_hundred,two_hundred,hundred,fifty,twenty,ten,five,two,one;
	printf("Enter the total amount:");
	scanf("%d",&total_amount);
	two_thousand = total_amount/2000;
	five_hundred = (total_amount - two_thousand*2000)/500;
	two_hundred = (total_amount - two_thousand*2000 - five_hundred*500)/200;
	hundred = (total_amount - two_thousand*2000 - five_hundred*500 - two_hundred*200)/100;
	fifty = (total_amount - two_thousand*2000 - five_hundred*500 - two_hundred*200 - hundred*100)/50;	
	twenty = (total_amount - two_thousand*2000 - five_hundred*500 - two_hundred*200 - hundred*100 - fifty*50)/20;
	ten = (total_amount - two_thousand*2000 - five_hundred*500 - two_hundred*200 - hundred*100 - fifty*50 - twenty*20)/10;		
	five = (total_amount - two_thousand*2000 - five_hundred*500 - two_hundred*200 - hundred*100 - fifty*50 - twenty*20 - ten*10)/5;	
	two = (total_amount - two_thousand*2000 - five_hundred*500 - two_hundred*200 - hundred*100 - fifty*50 - twenty*20 - ten*10 - five*5)/2;	
	one = (total_amount - two_thousand*2000 - five_hundred*500 - two_hundred*200 - hundred*100 - fifty*50 - twenty*20 - ten*10 - five*5 - two*2)/1;	
	printf("2000 Rs= %d\n500 Rs= %d\n200 Rs= %d\n100 Rs= %d\n50 Rs= %d\n20 Rs= %d\n10 Rs= %d\n5 Rs= %d\n2 Rs= %d\n1 Rs= %d",two_thousand,five_hundred,two_hundred,hundred,fifty,twenty,ten,five,two,one);
	printf("\nTotal Notes: %d",two_thousand+five_hundred+two_hundred+hundred+fifty+twenty+ten+five+two+one);
	return 0;
}
