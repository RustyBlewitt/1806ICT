/* Write a program that reads in a word and a character. It prints out the word modified
in such a way that every occurrence of the character in the word, is deleted. */

#include <stdio.h>

int main(int argc, char **argv)
{
	char str[50];
	char strCopy[50];
	char ch;
	int strLen = 0;
	
	printf("Enter a word and a character to have every occurence of the character removed from the word\n");
	
	scanf("%s %c", str, &ch);
	
	for(int i = 0; ;i++){
		if(str[i] == '\0'){
			break;
			}
		strLen++;
		}
	
	int j = 0;
	for(int i = 0; i < strLen; i++){
		
		if(str[i] != ch){
			strCopy[j] = str[i];
			j++;
			}
			
		}
	
	printf("%s\n", strCopy);
	
	return 0;
}
