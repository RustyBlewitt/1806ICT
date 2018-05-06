/* Write a program that opens a text file for reading, and prints out the total number of
words, and the number of unique words in that text file. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxChar 10
#define maxWords 150
#define fileLocation "../../myTextFile.txt"

int main(int argc, char **argv){
	FILE* myTextFile = fopen(fileLocation, "r");
	
//	Init char array 'str' and copy for 'unique' words only
	char str[maxWords][maxChar] = {"\0"};
	char unique[maxWords][maxChar] = {"\0"};
	
	//  wordCount,letterCount
	int wCount = 0;
	int lCount = 0;
	
	while(1){
		//	c = Each iteration's char holder
		char c = fgetc(myTextFile);
		
		if(c == EOF){
			break;
			}
			
		if(c == ' ' || c == '\n'){
			wCount++;
			lCount = 0;
			continue;
			} /* If space or new line */
			
		if(c != '.'){
			str[wCount][lCount] = c;
			lCount++;
		} /* Anything but full stop, move to next iteration */
	}
	
	//	Init first unique word
	strcpy(unique[0], str[0]);
	
	//	uniqueCount
	int uCount = 1;
	
	for(int i = 0; ;i++){
		if(strcasecmp(str[i], "\0") == 0){
			break;
			}
			
		//	flag to indicate uniqueness
		int dupe = 0;
		
		//	loop through array of unique words
		for(int j = 0; j < uCount; j++){
			if(strcasecmp(str[i], unique[j]) == 0){
				dupe = 1;
				break;
			}/* if a duplicate, flag as dupe then break loop */
		}
		
		if(!dupe){
			strcpy(unique[uCount], str[i]);
			uCount++;
			}/* if unique, copy to array of unique words and inc. uCount */
	}
	
	printf("There are %d words in your file, %d of which are unique!\n", wCount, uCount);
	}