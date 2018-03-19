/* Write a program to generate and display a table of n and n2, for integer values of n
ranging from 1 to 10. */

#include <stdio.h>

int main(int argc, char **argv)
{
	int n = 1;
	printf("  n  |  n*n  \n");
	while(n < 11){
		int nSqrd = n * n;
		printf("  %d  |  %d\n", n, nSqrd);
		n++;
		}
	return 0;
}
