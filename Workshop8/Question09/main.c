/* Write a program that reads in a text file, and outputs the alphabetical letters, together with
their counts. Your program must consist of at least the following functions:
a. openFile: Opens the input text file. If the file does not exist, the program should print
an appropriate message and exit. The program must ask the user for the name of the
input file
b. count: Counts the occurrence of every capital letters A-Z and every small letters a-z
in the text file opened in the function openFile. This information must be stored in an 
array of structures. The array must be passed as an input parameter, and the file
pointer must also be passed as an input parameter
c. printResult: Prints the number of capital letters and small letters, as well as the
percentage of capital letters for every letter A-Z and the percentage of small letters for
every letter a-z. This information must come from an array of structures, and this array
must be passed as an input parameter
*/

#include <stdio.h>

typedef struct{
	char letter;
	int count;
	}Letter;

FILE* openFile(){
	char fileAddr[150];
	printf("Enter input file address: ");
	scanf("%s", fileAddr);
	FILE* fp = fopen(fileAddr, "r");
	if(fp == NULL){
		printf("File does not exist/couldn't be opened. Exiting program\n");
		}
	else{
		printf("File opened successfully\n");
		}
	return fp;
	}

void count(Letter *letters, FILE* fp){
	int ch;
	while(1){
		ch = (int)fgetc(fp);
		if(feof(fp)){
			break;
			}
		if(ch >= 65 && ch <= 90){
			ch -= 65;
			letters[ch].count++;
			}
		else if(ch >= 97 && ch <= 122){
			ch -= 71;
			letters[ch].count++;
			}
		else{
			printf("Skipping invalid input %c\n", ch);
			continue;
			}
		}
	}

void printResult(Letter *letters){
	for(int i = 0; i < 26; i++){
		int upCount = letters[i].count;
		int lowCount = letters[i+26].count;
		float total = upCount + lowCount;
		float upPercent = 0;
		float lowPercent = 0;
		
		//	Percentages
		if(upCount == 0 && lowCount == 0){
			printf(" >>> No %c's or %c's\n", letters[i].letter, letters[i+26].letter);
			}
		else if(upCount > 0 && lowCount > 0){
			upPercent = (upCount / total) * 100;
			lowPercent = (lowCount / total) * 100;
			printf("%c: %d  %c: %d", letters[i].letter, upCount, letters[i+26].letter, lowCount);
			printf("\n ratio = %.1f%% : %.1f%%\n", upPercent, lowPercent);
			}
		else if(upCount == 0){
			printf("%c: %d  %c: %d", letters[i].letter, upCount, letters[i+26].letter, lowCount);
			printf("\n ratio = 0%%  : 100%% \n");
			}
		else if(lowCount == 0){
			printf("%c: %d  %c: %d", letters[i].letter, upCount, letters[i+26].letter, lowCount);
			printf("\n ratio = 100%%: 0%% \n");
			}
		else{
			printf("Error on iter: %d\n", i);
			}
		}
	}

int main(int argc, char **argv)
{
	FILE* input = NULL;
	input = openFile();

	if(input == NULL){
		return 1;
		}
		
	Letter allLetters[52];
	
	//	A-Z = 65-90 | allLetters[0-25] | if upper case char val - 65 = indexVal
	//	a-z = 97-122 | allLetters[26-51] | if lower case char val - 71 = indexVal
	//	allLetters[] = A,...,Z,a,...,z
	for(int i = 0; i < 26; i++){
		allLetters[i].letter = (char) i + 65;
		allLetters[i].count = 0;
		}
	for(int i = 26; i < 52; i++){
		allLetters[i].letter = (char) i + 71;
		allLetters[i].count = 0;
		}
	
	count(allLetters, input);
	printResult(allLetters);
	return 0;
}
