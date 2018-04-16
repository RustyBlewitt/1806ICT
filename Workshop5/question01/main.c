/* Write a program that reads in the size of an array and the array elements (all of which
are integers). The program then computes the sum of all the elements in the given
array. Note: If the input is 3 1 4 8, then the array has 3 elements {1, 4, 8}. */  

#include <stdio.h>

int main()
{
	int arrSize, total = 0;
	
	printf("Enter an integer to specify size of array: ");
	scanf("%d", &arrSize);
	
	int myArray[arrSize];
	
	printf("Enter integers to fill your array and have the sum of all elements returned\n");
	
	for(int i = 0; i < arrSize; i++){
		scanf("%d", &myArray[i]);
		}
	
	for(int i = 0; i < arrSize; i++){
		total += myArray[i];
		}
		
	printf("The sum of all integers in your array is: %d\n", total);
}
