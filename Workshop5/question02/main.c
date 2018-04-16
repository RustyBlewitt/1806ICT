/* Write a program that reads in the size of an array and the array elements (all of which
are integers). The program then prints out the minimum and maximum values in the
given array */

#include <stdio.h>

int main()
{
	int arrSize, min, max;
	
	printf("Enter an integer to specify size of array: ");
	scanf("%d", &arrSize);
	
	int myArray[arrSize];
	
	printf("Enter integers to fill your array and have the min and max elements of your array returned\n");
	
//	Fill array with inputs
	for(int i = 0; i < arrSize; i++){
		scanf("%d", &myArray[i]);
		}
	
//	Init min and max with first input
	min = myArray[0];
	max = myArray[0];
	
	for(int i = 1; i < arrSize; i++){
		if(myArray[i] < min){
			min = myArray[i];
			}
		if(myArray[i] > max){
			max = myArray[i];
			}
		}
		
	printf("The smallest integer in your array is: %d\n The largest integer in your array is: %d\n ", min, max);
}
