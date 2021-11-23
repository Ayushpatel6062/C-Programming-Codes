#include<stdio.h> // 'stdio' meaning standard input and output.
void main() // void means empty. All the functions are kept in 'main' of void main
{ 
	printf("Hello World"); // %d (integer), %f (float), %s (string), %c (character) are called as format specifiers.
	printf("\n%d + %d = %d",6,1,6+1);
	printf("\n%.1f / %.1f = %.0f",7.5,7.5,7.5/7.5);
	printf("\n%.1f * %.1d = %.0f",4.5,2,4.5*2);
	printf("\n%d - %d = %d",5,4,5-4);
}
