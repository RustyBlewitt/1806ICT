/* Following on from Q6, now turn the problem in Q6 around.
a. Ask the user to select a number, and the program will guess the number.
b. The program will ask the user if the guess is correct, higher or lower.
c. The user will enter an appropriate response accordingly (e.g. 0 for correct, 1 for too low,
	2 for too high)
d. The program must implement a sensible guessing strategy.
Use functions in your program. */

#include <stdio.h>

int tooLow(int low, high){
		return low + ( (high - low) / 2 );
	}

int tooHigh(int low, high){
		return high - ( (high - low) / 2 );
	}

int main(){
	
	int low = 1, high = 1000, guess, input = 1;
	printf("Think of a number between 1 and 1000 and I will guess until I get it.\n");
	printf("After each guess, input either 0, 1 or 2 then press enter.\n");
	printf("0 = Correct, 1 = Too low, 2 = Too high.\n");
	printf("Enter 0 to begin... ");
	scanf("%d", &guess);
	
	guess = 500;
	
	while(input != 0){
		printf("I guess: %d\n", guess);
		scanf("%d", &input);
		if(input == 1){
			low = guess;
			guess = tooLow(low, high);
			}
		else if(input == 2){
			high = guess;
			guess = tooHigh(low, high);		
			}
		else if(input == 0){
			break;
			}
		else{
			printf("Invalid input, try again.\n 0 = Correct, 1 = Too low, 2 = Too high\n");
			}
		}
		
		printf("%d! Great choice\n", guess);
}