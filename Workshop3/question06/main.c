//Write a program that takes an integer and displays each digit of the integer in English. 

#include <stdio.h>
#include <math.h>

int main()
{
	int input, inputCopy, digitCount = 0;
	
	const char * key[10];
	key[0] = "zero";
	key[1] = "one";
	key[2] = "two";
	key[3] = "three";
	key[4] = "four";
	key[5] = "five";
	key[6] = "six";
	key[7] = "seven";
	key[8] = "eight";
	key[9] = "nine";
	
	printf("\nEnter an integer to have each digit returned in English\n");
	scanf("%d", &input);
	
	//	Indicate negative num then convert it to positive
	if(input < 0){
		printf("negative ");
		input = sqrt(input * input);
	}
	
	//	Set copy
	inputCopy = input;
	
	//	Count digits by /= 10 then count incrementation
	while(inputCopy > 0){
		inputCopy /= 10;
		digitCount++;
		}
		
	/* Resets copy, sets copy to the digitCount-th digit through division of copy by 10^digitCount-1, prints corresponding
	   inputCopy's string. */
	while(digitCount > 0){
		inputCopy = input;
		inputCopy /= pow(10, digitCount - 1);
		int i = inputCopy % 10;
		printf("%s ", key[i]);
		digitCount--;
		}
		
	printf("\n");
	return 0;
	
}