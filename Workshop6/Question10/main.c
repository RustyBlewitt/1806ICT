/* The constant CHAR_BIT is defined in the header file limits.h to represent the
number of bits in a char or byte.
Now, write two functions that counts the number of bits in a char and an int.
Hint: The expression ~0 (complement of 0) will produce a number that contains bits
that are all 1’s.  */

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

int countCharBits(int n){
	int size = sizeof(char) * CHAR_BIT;
	int count = 0;
	for(int i = 0; i < size; i++){
		count += 1 & n;
		n >>= 1;
		}
	return count;
	}
	
int main(int argc, char **argv)
{
	int choice;
	printf("Enter 1 to have set bits of an INT returned or 0 to have set bits of a CHAR returned: ");
	scanf("%d", &choice);
	
	if(choice){
		int num;
		printf("\nEnter an integer to have it's set bits counted: ");
		scanf("%d", &num);
		printf("\nThere are %d bits set in %d\n", countIntBits(num), num);
	}/* if choice was 1, call countIntBits */
	else{
		char c;
		printf("\nEnter a char to have it's set bits counted: ");
		scanf(" %c", &c);
		printf("\nThere are %d bits set in %c\n", countCharBits(c), c);
			}
	
	return 0;
}	
