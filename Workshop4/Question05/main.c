/* Write a coin tossing program. The program should use a function flipCoin( ) that returns 0 for
tails and 1 for heads. Use a loop to flip the coin 1000 times, and count the number of times
each side of the coin appears. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int flipCoin(void){
	int x = rand();
	
	if(x % 2 == 0){
		return 1;
	}else{
		return 0;
			}
	}


int main(int argc, char **argv)
{
	srand(time(NULL));
	
	int heads = 0, tails = 0;
	
	for(int i = 0; i < 1000; i++){
		if(flipCoin() == 0){
			tails++;
		}else{
			heads++;
				}
		}
		
	printf("For 1000 flips of a coin the results were\n%d Heads and %d Tails\n", heads, tails);
	return 0;
}