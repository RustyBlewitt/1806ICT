/* The least common multiple (lcm) of two positive integers u and v is the smallest positive
integer that is evenly divisible by both u and v. Thus, the lcm of 15 and 10, written as lcm(15,
10), is 30 because 30 is the smallest integer divisible by both 15 and 10. Write a function lcm()
that takes two integer arguments, and returns their lcm. */

#include <stdio.h>

int lcm(int small, int big){
	int current;
	for(int i = 1; ; i++){
		current = big * i;
		if(current % small == 0){
			break;
			}
	}
	return current;
}

int main(int argc, char **argv)
{
	int big, small, temp;
	
	printf("Enter two positive integers to have the lowest common multiple returned\n");
	scanf("%d %d", &big, &small);
	
	if(small > big){
		temp = big;
		big = small;
		small = temp;
		}
	
	printf("Lowest common multiple for %d and %d is: %d\n", small, big, lcm(small, big));
		
	return 0;
}
