/* Write a program that reads in the size of an array and the array elements (all of which
are integers). Say that a “clump” in the given array is a series of 2 or more adjacent
elements of the same value. Your program will print out the number of clumps in the
given array. */

#include <stdio.h>

int main()
{
	int lastNum, arrSize, count = 0, flag = 0;
	
	printf("Enter the size of your array: ");
	scanf("%d", &arrSize);
	
	int myArray[arrSize];
	
	printf("Enter integers to fill your array, the number of clumps (two or more of the same consecutive ints) will be returned:\n");
	for(int i = 0; i < arrSize; i++){
		scanf("%d", &myArray[i]);
		}
		
	lastNum = myArray[0];
	
	//	Loop through array, checking lastNum equality and flag (which is 1 if count already ++'d for current clump).
	for(int i = 1; i < arrSize; i++){
		// iff clump && new clump (yet to be flagged) will count increment. This num will then be flagged.		
		if(myArray[i] == lastNum && !flag){
			count++;
			flag = 1;
			continue;
			}
		//Flag resets when num != lastNum and lastNum adjusted		
		if(myArray[i] != lastNum){
			flag = 0;
			lastNum = myArray[i];
			}
		}
		
	printf("%d clumps found\n", count);
}
