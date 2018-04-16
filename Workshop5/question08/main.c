/* Write a program that reads in the size of an array and the array elements (all of which
are integers). Find the number of indexes in the array such that the sum of elements
at lower indexes is equal to the sum of elements at higher indexes. For example given
an array {-7, 1, 5, 2, -4, 3, 0}, one of such indexes is index 3 because:
	-7 + 1 + 5 = -4 + 3 + 0
 Given the same array, another of such indexes is index 6 because
	-7 + 1 + 5 + 2 – 4 + 3 = 0
 Therefore, the number of such indexes in the given array would be 2. */

#include <stdio.h>

int main()
{
	int arrayLen, count = 0;
	
	printf("Enter the length of your array: ");
	scanf("%d", &arrayLen);
	
	int myArray[arrayLen];
	
	printf("Enter integers to fill your array and have the number of indexes in which sum of all elements at lower indexes is equal to sum of all elements at lower indexes:\n");
	for(int i = 0; i < arrayLen; i++){
		scanf("%d", &myArray[i]);
		}		
		
	for(int i = 0; i < arrayLen; i++){
		int lowSum = 0, highSum = 0;
		
		//Add lower indexes
		for(int j = 0; j < i; j++){
			lowSum += myArray[j];
		}
		
		//Add higher indexes
		for(int j = i + 1; j < arrayLen; j++){
			highSum += myArray[j];
		}
		
		//Check equality on high and low sums
		if(lowSum == highSum){
			count++;
			}
	}
	printf("%d instances where sum of higher indexes are equal to sum of lower indexes\n", count);
}
