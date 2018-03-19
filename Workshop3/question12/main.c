/* Write a program that converts a binary number to its decimal equivalent */

#include <stdio.h>

int main()
{
	int binary, count = 1, base10 = 0;
	
	printf("Enter a binary number to have it converted to it's base 10 equivalent\n");
	scanf("%d", &binary);
	
	while(binary > 0){
		base10 += (binary % 10) * (count);
		count *= 2;
		binary /= 10;
		}
		
	printf("\nYour number converts to the base 10 number: %d\n", base10);
}
