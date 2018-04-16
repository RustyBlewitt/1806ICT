/* A palindrome is a number or a text phrase that reads the same backwards as well as
forwards. Write a program that reads in a positive integer number, and prints out whether or not that
number is a palindrome. */

#include <stdio.h>

int main()
{
	int input, copy, mirror = 0;
	
	printf("Enter a positive integer to check if it is a palindrome:\n");
	scanf("%d", &input);
	
	copy = input;

	while(copy > 0){
		mirror += copy%10;
		mirror *= 10;
		copy /= 10;
		}
		
//	Drop trailing zero left by mirror *= 10
	mirror /= 10;
		
	if(input == mirror){
		printf("\nYour number is a palindrome, great job\n");
		}
	else{
		printf("\nYour number is not a palindrome\n");
		}
		
	return 0;
}
