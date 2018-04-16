/* Write a program to generate and display a table of n and n^2, for integer values of n
ranging from 1 to 10. */

#include <stdio.h>

int main(int argc, char **argv)
{
	int n = 1;
	printf("  n  |  n*n  \n");
	while(n < 11){
		int nSqrd = n * n;
		if(n < 10){
			printf("  %d  |  %d\n", n, nSqrd);
		}else{
			printf("  %d |  %d\n", n, nSqrd);
				}
		n++;
		}
	return 0;
}
