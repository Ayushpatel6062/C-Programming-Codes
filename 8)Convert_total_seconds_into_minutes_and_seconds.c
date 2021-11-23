#include<stdio.h>
int main()
{	int total_seconds,min,sec;
	printf("Enter time (in seconds):");
	scanf("%d",&total_seconds);
	min = total_seconds/60;
	sec = total_seconds - min*60;
	printf("Minutes: %d \nSeconds: %d",min,sec);
}
