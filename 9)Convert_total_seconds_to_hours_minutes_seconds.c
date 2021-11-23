#include<stdio.h> // #include<conio.h> means console input output
int main()
{	int total_seconds,hours,minutes,seconds;
	printf("Enter Total seconds:");
	scanf("%d",&total_seconds);
	hours = total_seconds/3600;
	minutes = (total_seconds - (3600*hours))/ 60;
	seconds = total_seconds - 3600*hours - minutes*60;
	printf("Hours: %d\nMinutes: %d\nSeconds: %d",hours,minutes,seconds);
	return 0;
}
