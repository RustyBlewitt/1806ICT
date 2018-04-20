/* Write a function that separately sums the even indexed elements and odd indexed
elements of an array of doubles. Each element of the array contributes to one of the
two sums, depending on whether the index of the element is even or odd. Your
function definition should look something like this:
void sum(double a[], int n, / n is the size of a[] / double *even_index_sum_ptr, double *odd_index_sum_ptr)
{
…
}
Write a program to test your function. You can assume that the program reads in the
size of the array, followed by the array elements. In this question, the array elements
are all floating point values.
 */
#include <stdio.h>

void separateSums(int size, double arr[], double *evenPtr, double *oddPtr){
		for(int i = 0; i < size; i++){
			if(i%2 == 1){
				*oddPtr += arr[i];
			} else {
				*evenPtr += arr[i];	
				}
			}
	}

int main(int argc, char **argv)
{
	double oddSum = 0;
	double evenSum = 0;
	int size = 0;
	int count = 0;
	
	printf("This program will create an array filled with your inputs (doubles) and separately return the sum of all even ");
	printf("and all odd indexed entries.\n");
	printf("Input the size of your array:\n");
	scanf("%d", &size);
	
	double myArray [size];
	
	printf("Now input the doubles you would like to fill the array with, press enter after each entry\n");
	
	while(scanf("%lf", &myArray[count])){
			count++;
			if(count == size){
				break;
				}
		}
		
	separateSums(size, myArray, &evenSum, &oddSum);
	
	printf("Sum of even indexes: %.2lf, Sum of odd indexes: %.2lf", oddSum, evenSum);
	
	return 0;
}
