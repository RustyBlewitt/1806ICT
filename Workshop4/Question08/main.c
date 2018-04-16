/* The Goldbach conjecture says that every even integer n that is greater than 2 has the property
that it is the sum of two prime numbers. Using your solution from Q3, write a program that
will prove that the conjecture is true for all even integers between two numbers that you will
input into the program. */

#include <stdio.h>

int isPrime(int x){
	int prime = 1;
	
	for(int i = 2; i < x-1; i++){
		if(x % i == 0){
			prime = 0;
			break;
			}
		}
		
	return prime;
}

int main(int argc, char **argv)
{
	int low, high;
	printf("Enter two integers, the first smaller than the second, to have the Goldbach Conjecture proven on all even integers in this range.\n");
	scanf("%d %d", &low, &high);
	
	// Error check false input	
	if(high < low){
		printf("Error: First integer must be smaller than second");
		}
	
	for(int i = low; i <= high; i++){
		// Skip odd nums in range
		if(i % 2 == 1){
			continue;
			}
			
		//	j iterations are numbers within current i iteration
		for(int j = 2; j < i; j++){
			// If current j iteration is prime and i iteration minus j iteration is prime {...}	
			if(isPrime(j) && isPrime(i- j) ){
				printf("%d = %d + %d\n", i, j, i - j);
				break;
				}
		}
	}
	return 0;
}
