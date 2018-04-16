/* An integer is said to be a prime number if it is divisible only by 1 and itself. For example, 2, 3, 5,
and 7 are prime numbers, but 4, 6, 8, and 9 are not. Write a function that determines if a
number is prime. */

#include <stdio.h>

int prime(int num){
	int prime = 1;
	for(int i = 2; i < num-1; i++){
		if(num % i == 0){
			prime = 0;
			break;
			}
		}
	return prime;
	}

int main(int argc, char **argv)
{
	int num;
	
	printf("Enter a number to determine whether it is prime or not: ");
	scanf("%d", &num);
		
	if(prime(num) == 1){
		printf("\n%d is a prime number.\n", num);
	}else{
		printf("\n%d is not a prime number.\n", num);
		}
		
	return 0;
}
