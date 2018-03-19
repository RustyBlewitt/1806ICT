// Print out the two largest numbers in a set of integer numbers input into the program.

#include <stdio.h>

int main(){
	printf("Enter a series of numbers to have the largest and second largest numbers entered returned.\nPress Return between each entry, enter a non-number to finish.\n");

	int i, max, max2, first = 1, second = 1;

// On valid input, turn pseudo-bool 'first' to 0.
	while(scanf("%d", &i) > 0){
		
			if(first == 1){
				max = i;
				first--;
				continue;
			}
			
			if(second == 1){
				if(i > max){
					max = i;
				}else{
					max2 = i;
					}
				second--;
				continue;
				}
				
			if(i > max2){
				if(i > max){
					max2 = max;
					max = i;
					continue;
					}
				max2 = i;
				}
		}
		
	printf("\nLargest number entered was: %d\nSecond largest was: %d\n\n", max, max2);
	
	}