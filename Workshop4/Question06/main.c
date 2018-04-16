/* Write a program that plays the game “Guess a number”.
a. The program will initially choose an integer number (from the range 1 to 1000) to be
guessed.
b. The program will prompt the user to enter a guess.
c. If the guess is correct, the program will output “Congratulations! You guessed it!”
d. If the guess is incorrect, the program will either output “Too low, please guess again.”
or “Too high, please guess again”, depending on whether the guess is lower or higher
than the correct answer.
e. The program will loop infinitely until the user guesses correctly.
Use functions in your program. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int isCorrect(int num, int guess){
	if(num == guess){
		printf("Correct!\n");
		return 0;
		}
	if(guess < num){
		printf("Too low, try again\n");
		return 1;
		}
	else{
		printf("Too high, try again\n");
		return 2;
		}
	}

int main(int argc, char **argv)
{
	int num, guess;
	srand(time(NULL));
	num = rand() % 1000;
	
	printf("Guess the number between 1 and 1000\n");
	
	do{
		scanf("%d", &guess);
	}
	while(isCorrect(num, guess) != 0);
	
	return 0;
}
