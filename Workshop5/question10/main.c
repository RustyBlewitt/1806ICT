/* Suppose that you are going to play 18 holes of golf with two friends. Write a program to
randomly generate the input scores for each hole (for you and both your friends), and then at
the end of the round (i.e. after hole number 18), add up the scores and report on various
statistics for each of you. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define holes 18

int randGen(int min, int max){
//	max - min e.g. 5 - 3 (2) will be 1 short of inclusive range. (Inc. range = 3 (3, 4 and 5) ). Adding min will bring lowest result (0) up to min.
	return( (rand()%(max - min + 1) + min) );
	}

int main()
{
//	{"Hole in one", "Albatross", "Eagle", "Birdie", "Par", "Bogey", "Double bogey", "Triple bogey +"}; 
	int namesCount[8] = {0};
	
// 	Players total scores
	int totalScores[3] = {0};

//	Seed random with the time
	srand(time(NULL));
	
	int pars[holes];
	int strokes[3][holes];
	double averages[holes];
	
//	Populate pars[] with randGen returns
	for(int i = 0; i < holes; i++){
		pars[i] = randGen(3, 5);
		}

//	Populate strokes[][] with randGen returns and increments namesCount[] when scores are created.
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < holes; j++){
			strokes[i][j] = randGen(1, 10);
			/*	int k's value will be index of it's names[] equivalent. Stroke count - par = strokes more or less than par for that hole.
				Plus 4'ing k will then bring this figure up to it's corresponding index. */
			int k = strokes[i][j] - pars[j] + 4;
			// Above triple bogeys become Triple Bogeys
			if(k > 7){
				k = 7;
			}
			namesCount[k]++;
			// Inc players total scores
			totalScores[i] = totalScores[i] += strokes[i][j];
			}
	}

//	Calculate averages
	for(int i = 0; i < holes; i++){
		averages[i] = (float)(strokes[0][i] + strokes[1][i] + strokes[2][i]) / 3;
		}

//	Match result
	printf("Scores for this game of golf: \n");
	for(int i = 0; i < 3; i++){
		printf("\nPlayer %d, total score: %d\n", i + 1, totalScores[i]);
		for(int j = 0; j < holes; j++){
			printf("Hole %d, par %d: %d\n", j + 1, pars[j], strokes[i][j]);
			}
	}
	
	printf("\nAverage scores: \n");
	for(int i = 0; i < holes; i++){
		printf("Hole %d: %.1lf\n", i + 1, averages[i]);
		}
	
	printf("\nIn this game of golf there were: \n");
	printf("%d Hole in ones\n", namesCount[0]);
	printf("%d Albatross'\n", namesCount[1]);
	printf("%d Eagles\n", namesCount[2]);
	printf("%d Birdies\n", namesCount[3]);
	printf("%d Pars\n", namesCount[4]);
	printf("%d Bogeys\n", namesCount[5]);
	printf("%d Double Bogeys\n", namesCount[6]);
	printf("%d Triple Bogeys +\n", namesCount[7]);
}
