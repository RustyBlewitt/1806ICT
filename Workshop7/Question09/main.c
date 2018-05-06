/* Write a program that reads in a line of text, and prints out the number of words in that
line of text. A word contains characters that are alphanumeric. Hint: Use the fgets()
function. */

#include <stdio.h>

int main(int argc, char **argv)
{
	char str[100];
	
	fgets(str, 100, stdin);
	
	int charFlag = 0;
	int wordCount = 0;
	
	for(int i = 0; i < 100 ;i++){
		
		char ch = str[i];
		
		//	if null term, break loop
		if(ch == '\0'){
			break;
			}
			
		else{
			// if is char
			if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ){
				// if first char of word
				if(!charFlag){
					wordCount++;
					charFlag = 1;
				}
			}
			//	if not char, lower charFlag		
			else{
				charFlag = 0;
				}
		}
	}
	
	printf("There are %d words in %s\n", wordCount, str);
	return 0;
}
