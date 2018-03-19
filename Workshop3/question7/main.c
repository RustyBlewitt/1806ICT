/* Given an input consisting of a set of integer numbers, write a program that prints out
the largest number. Your program must check for valid input. */

#include <stdio.h>

int main(){
	printf("Enter a series of numbers to have the largest number entered returned.\nPress Return between each entry, enter a non-number to finish.\n");

	int i, max, first = 1;

	while(scanf("%d", &i) > 0){
			if(first == 1){
				max = i;
				first = 0;
			}
			if(i > max){
				max = i;
				}
		}
		
	printf("\nLargest number entered was: %d\n", max);
	
	}