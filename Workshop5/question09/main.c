/* Write a program that performs the addition of two matrices of the same size. An
example showing the addition of two matrices is given below:
{ 3 6 1 }   { 4 1 3 }     7 7 4
{ 2 1 4 } + { 2 5 5 }  =  4 6 9
{ 5 2 3 }   { 1 2 3 }     6 4 6
Use two 2-D arrays to store the elements for the two matrices. */

#include <stdio.h>

int main()
{
	int x, y;
	
	printf("Enter the length of the X dimension's of your matrices\n");
	scanf("%d", &x);
	
	printf("Enter the length of the Y dimension of your matrices\n");
	scanf("%d", &y);
	
	int myArray1[y][x];
	int myArray2[y][x];
	int myArray3[y][x];
	
	printf("For your first matrix, enter integers to populate:\n");
	
	for(int i = 0; i < y; i++){
		printf("Row number: %d\n", i+1);
		for(int j = 0; j < x; j++){
			scanf("%d", &myArray1[i][j]);
			}
		}
	
	printf("For your second matrix, enter integers to populate:\n");
	
	for(int i = 0; i < y; i++){
		printf("Row number: %d\n", i+1);
		for(int j = 0; j < x; j++){
			scanf("%d", &myArray2[i][j]);
			}
		}
	
	//For each index of myArray3, populate with sum of corresponding myArray1 and myArray2 values.
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			myArray3[i][j] = myArray1[i][j] + myArray2[i][j];
			}
		}
		
	//Loop through all arrays printing with formatting either side of for loops.	
	for(int i = 0; i < y; i++){
		printf("\n| ");
		for(int j = 0; j < x; j++){
			printf("%d ", myArray1[i][j]);
			}
		printf("| + ");
			
		printf("| ");
		for(int j = 0; j < x; j++){
			printf("%d ", myArray2[i][j]);
			}
		printf("|  ");
		
		printf("=  | ");
		for(int j = 0; j < x; j++){
			printf("%d ", myArray3[i][j]);
			}
		printf("|  ");
		}
}
