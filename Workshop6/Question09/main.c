/* The calloc(n, size) function returns a pointer to n objects (or elements), each of
size 'size', with the memory storage initialized to zero. On the other hand,
malloc(size) function returns a pointer to the requested memory with size size,
but with the memory storage uninitialized.
 * 
a. Write a program that uses the calloc() and malloc() functions to allocate
	memory for an array of 10 integers. Write a function void printArray(int
	*ptr, int n) that takes in the pointer to the array and the array size n, to
	print out the 10 array elements. You should see that the array created with
	calloc() has all its elements initialized to zero, while the array created with
	malloc() may not necessarily have all its elements initialized to zero.
	 
b. Write a function myCalloc(n, size) that uses the malloc() function to
	implement the functionality of calloc(). Use the printArray() function
	written in Part (a) above to verify that the elements of the array created with
	myCalloc() are all initialized to zero. */

#include <stdio.h>
#include <stdlib.h>

void printArray(int *ptr, int n){
	
	for(int i = 0; i < n; i++){
		printf("%d\n", *ptr++);
		}
		
}

int * myCalloc(int n, int size){
	//	*orig is a copy of m, as m will be incremented to zero out 'n' elements.
	//	This function will return orig
	
	int *m = malloc(size);
	int *orig = m;
	
	for(int i = 0; i <  n; i++){
		*m = 0;
		m++;
		}
		
	return orig;
}

int main()
{
	int n = 10;
	
//	int *m = malloc(sizeof(int));
//	int *c = calloc(10, sizeof(int));
	
	int *myCall = myCalloc(n, sizeof(int));
	
	printArray(myCall, n);
	
	return 0;
}
