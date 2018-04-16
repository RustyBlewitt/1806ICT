/* Write a program that will convert a decimal number to its binary equivalent. Use functions in
your program. */

#include <stdio.h>
#include <math.h>

long int binaryConvert(int decimal){
	//	Flag will indicate whether a 1 has been recorded yet, to eliminate padding
	int flag = 0, binary = 0;
	
	for(int i = 32; i >= 0; i--){
		if(pow(2, i) <= decimal){
			decimal -= pow(2, i);
			binary *= 10;
			binary += 1;
			flag = 1;
			}
		else{
			if(flag == 1){
				binary *= 10;
				}
			}
		}
		return binary;
	}

int main(int argc, char **argv)
{
	int decimal;
	
	printf("Enter a decimal number to have it's binary equivalent returned:\n");
	scanf("%d", &decimal);
	
	printf("Binary equivalent: %ld\n", binaryConvert(decimal));
	return 0;
	
	}
