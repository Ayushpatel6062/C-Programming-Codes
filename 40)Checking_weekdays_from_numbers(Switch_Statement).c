#include<stdio.h>
int main()
{	int a;
	printf("Enter a number between 1 to 7: ");
	scanf("%d",&a);
	
	switch(a)
	{	case 1:
			printf("\nMonday");
			break;
		case 2:
			printf("\nTuesday");
			break;
		case 3:
			printf("\nWednesday");
			break;
		case 4:
			printf("\nThursday");
			break;
		case 5:
			printf("\nFriday");
			break;
		case 6:
			printf("\nSaturday");
			break;
		case 7:
			printf("\nSunday");
			break;
		default:
			printf("Enter a valid input between 1 to 7");
	}
	return 0;
}
