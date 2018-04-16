/* Write a program to find the greatest common divisor (gcd) of two positive integers. The
greatest common divisor of two integers is the largest integer value that evenly divides the two
integers. Define a function that takes in the two integers and returns the gcd to the main
program. */

#include <stdio.h>

int gcd(int small, int big){
	int current;
	for(int i = 1; i <= small; i++){
		if(small % i == 0 && big % i == 0){
			current = i;
			}
		}
	return current;
	}

int main(int argc, char **argv)
{
	int big, small, temp;
	
	printf("Enter two positive integers to have the greatest common divisor returned\n");
	scanf("%d %d", &big, &small);
	
	if(small > big){
		temp = big;
		big = small;
		small = temp;
		}
	
	printf("Greatest Common Demoninator for %d and %d is: %d\n", small, big, gcd(small, big));
	return 0;
}
