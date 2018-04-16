/* Write a program that reads in the size of an array and the array elements (all of which
are integers). Print a version of the given array where each zero value in the array is
replaced by the largest odd value to the right of the zero in the array. If there is no odd
value to the right of the zero, leave the zero as a zero. */

#include <stdio.h>

int main()
{
	int arrSize;
	
	printf("Enter an integer to specify size of array: ");
	scanf("%d", &arrSize);
	
	int myArray[arrSize];
	
	printf("\nEnter integers to fill your array and have the array returned rearranged with all zero's replaced with the largest odd number to their right.\n");
	
//	Fill array with inputs
	for(int i = 0; i < arrSize; i++){
		scanf("%d", &myArray[i]);
		}
	
	
	for(int i = 0; i < arrSize; i++){
		if(myArray[i] == 0){
			int max = 0;
			for(int j = i; j < arrSize; j++){
				if(myArray[j] % 2 == 1 && myArray[j] > max){
					max = myArray[j];
					}
				}
			myArray[i] = max;
			}
		}

	for(int i = 0; i < arrSize; i++){
		printf("%d ", myArray[i]);
		}
}