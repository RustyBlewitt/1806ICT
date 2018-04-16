/* A Fibonacci series is a series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, … where the next
number is found by adding up the two numbers before it. Write a function that will find the n
th integer in the Fibonacci series. */

#include <stdio.h>

int fibSeries(int num){
		int older = 0, newer = 1;
		//	Start at 2 as first two nums (0 and 1) are initialised as older and newer
		for(int i = 2; i < num; i++){
			int temp;
			temp = older + newer;
			older = newer;
			newer = temp;
			}
		return newer;
	}

int main(int argc, char **argv)
{
	int n;
	
	printf("Input an integer 'n' to have the n-th number in the fibonacci series returned\n");
	scanf("%d", &n);
	
	printf("%d is the %dth number in the fibonacci series (including 0)\n", fibSeries(n), n);
}
