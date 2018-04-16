/* Write a program that reads in 20 integer numbers, each of which is between 1 and 10,
inclusive. Use an array to store the numbers as they are being read in, if and only if
that number is not a duplicate of a number already read. Print out the array containing
non-duplicate numbers */

#include <stdio.h>

int main()
{
	// Max 10 unique nums.
	int myArray[10];
	int count = 0;
	
	printf("Enter 20 integers between 1 and 10, an array will be returned with all duplicates removed");
	
	for(int i = 0; i <= 20; i++){
			
			// Flag indicates if for loop below finds duplicate			
			int flag = 0;
			int temp;
			scanf("%d", &temp);
			for(int i = 0; i <= 10; i++){
					if(temp == myArray[i]){
						flag = 1;
						}
				}			
			if(!flag){
				myArray[count] = temp;
				count++;
				}
		}
	
	//	Print for indexes < count as > count indexes are uninitialised
	for(int i = 0; i < count; i++){
		printf("%d ", myArray[i]);
		}
}
