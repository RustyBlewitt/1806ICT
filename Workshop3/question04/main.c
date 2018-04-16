// Write a program to generate and print a table of the first 10 factorials.

#include <stdio.h>

int main()
{
	printf("  n  |  n! \n");
	for(int i = 1; i < 11; i++){
		int result = 1;
		int j = i;
		while(j > 0){
			result *= j;
			j--;
			}
			if(i < 10){
				printf("  %d  |  %d\n", i, result);
			}else{
				printf(" %d  |  %d\n", i, result);
				}
			}
	return 0;
}
