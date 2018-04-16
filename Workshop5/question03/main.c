/* Write a program that reads in the size of an array and the array elements (all of which
are integers). The program then prints out an array that contains the exact same
numbers as the original given array, but with the array elements rearranged such that
all the even numbers come before all the odd numbers. Other than the latter
requirement, the numbers can be in any order. Challenge: Instead of using a new
array to store the rearranged numbers, try to rearrange the numbers in the original
given array itself. */

#include <stdio.h>

int main()
{
	int arrSize;
	
	printf("Enter an integer to specify size of array: ");
	scanf("%d", &arrSize);
	
	int myArray[arrSize];
	
	printf("Enter integers to fill your array and have the array returned rearranged with all even elements before odd elements\n");
	
//	Fill array with inputs
	for(int i = 0; i < arrSize; i++){
		scanf("%d", &myArray[i]);
		}
		
//	Bubble sort elements so that no odds are before evens, flag int invokes another loop
	int flag = 1;
	int temp;
	while(flag){
		flag = 0;
		for(int i = 0; i < arrSize - 1; i++){
			if(myArray[i]%2 == 1 && myArray[i+1]%2 == 0){
				temp = myArray[i];
				myArray[i] = myArray[i+1];
				myArray[i+1] = temp;
				flag = 1;
				}
			}
		}
//	Print elements of sorted array
	printf("Your arranged array is: ");
	for(int i = 0; i < arrSize; i++){
		printf("%d ", myArray[i]);
		}
}
