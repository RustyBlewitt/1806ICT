/* Given an integer number X and a value n, write a program that prints an output that is
made up of the first n digits of the number X, followed by the first n-1 digits of the
number X, and so on. Your program must check that the value n is smaller than the
number of digits in the number X. */

#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, z, i;
	
	printf("Enter two numbers (x y) to have the first y digits of x returned followed by the next y-1 digits and so on...\n");
	scanf("%d %d", &x, &y);
	
	z = pow(10, y - 1);
	
	if(z > x){
		printf("There isn't %d in %d\n", x, z);
		return 0;
	}
	
	while(x > z * 10){
		x /= 10;
		}

	
	while(x > 0){
		printf("%d", x);
		x /= 10;
		}
}
