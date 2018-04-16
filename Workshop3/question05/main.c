/* Given a user input of a positive integer number, write a program that computes the
sum of the digits of the given integer. */

#include <stdio.h>

int main()
{
	int input, output;
	
	printf("Input an integer to have the sum of it's digits returned to you:\n");
	scanf("%d", &input);
	
	output = 0;
	
	while(input > 0){
		output += input%10;
		input /= 10;
		}
	
	printf("\nThe sum of your integer's digits is: %d\n\n", output);
	
	return 0;
}
