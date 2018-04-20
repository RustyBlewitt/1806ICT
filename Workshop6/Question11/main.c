/* .Write a function that counts the number of bits that are set to “1” in a given integer
number. Use your function to determine if a given integer number is a power of two. */

#include <stdio.h>
#include <limits.h>

int countIntBits(int n){
	int size = sizeof(int) * CHAR_BIT;
	int count = 0;
	for(int i = 0; i < size; i++){
		count += 1 & n;
		n >>= 1;
		}
	return count;
	}

int main(int argc, char **argv)
{
	int num;
	int numSet;
	printf("Enter number to have set bits counted and power of 2-ness determined: ");
	scanf("%d", &num);
	
	numSet = countIntBits(num);
	
	printf("\nThere are %d set bits in %d\n", numSet, num);
	if(numSet == 1){
		printf("%d is a power of 2\n", num);
		}
	else{
		printf("%d is not a power of 2\n", num);
		}
	
}
