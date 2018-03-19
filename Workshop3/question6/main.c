//Write a program that takes an integer and displays each digit of the integer in English. 

#include <stdio.h>
#include <math.h>

int main()
{
	int input, inputCopy, zeroCount = 0;
	
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
	
	if(input < 0){
		printf("negative ");
		input = sqrt(input * input);
	}
	
	inputCopy = input;
		
	while(inputCopy > 0){
		zeroCount++;
		inputCopy /= 10;
		}
		
	inputCopy = input;
	
	while(input > 0){
		inputCopy = input;
		while(inputCopy >= 10){
			inputCopy /= 10;
			}
		printf("%s ", key[inputCopy]);
		input = input - inputCopy * (pow(10, zeroCount-1));
		zeroCount--;
		}
	printf("\n");
	}