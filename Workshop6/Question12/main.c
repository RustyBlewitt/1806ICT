/* Left shifting an unsigned integer by 1 bit is the same as multiplying that integer by the
value 2. Write a function that takes in two unsigned integer parameters number and
power, and computes the value of (number x 2power). */

#include <stdio.h>

unsigned int shift(unsigned int x, unsigned int y){
		return x << y;
	}

int main(int argc, char **argv)
{
	unsigned int x, y;
	printf("Enter two numbers to have the first number multiplied by 2 to the power of the second number: ");
	scanf("%u %u", &x, &y);
	
	printf("\n%u to the power of %u equals %u\n", x, y, shift(x, y));
	return 0;
}
