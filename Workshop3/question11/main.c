/* .A palindrome is a number or a text phrase that reads the same backwards as well as
forwards. Examples of palindromes are 123321, 1234321, 55555, 22, 454, 1, 0. Write
a program that reads in a positive integer number, and prints out whether or not that
number is a palindrome. */

#include <stdio.h>

int main()
{
	int input, copy, mirror = 0;
	
	printf("Enter a positive integer to check if it is a palindrome\n");
	scanf("%d", &input);
	
	copy = input;
	
/*	Mirror adds last digit of copy ( mod10 ), then gains a zero to give next digit a zero start ( *= 10), 
	then copy drops last digit for loop to start again ( /= 10 ) */

	while(copy > 0){
		mirror += copy%10;
		mirror *= 10;
		copy /= 10;
		
		printf("copy = %d, mirror = %d\n");
		}
		
//	Drop trailing zero left by mirror *= 10
	mirror /= 10;
		
	if(input == mirror){
		printf("\nYour number is a palindrome, great job.\n");
		}
	else{
		printf("\nYour number is not a palindrome\n");
		}
}
