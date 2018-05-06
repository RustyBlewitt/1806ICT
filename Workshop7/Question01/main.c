/* Write a program that reads in a word and outputs the number of characters in the
word. Try to write two versions of your program, one that uses the strlen()
function, and another one that doesn’t use the strlen() function. */

#include <stdio.h>
#define len 50

int main(int argc, char **argv)
{
	char str[len];
	int count = 0;
	printf("Input a word to have it's character count returned: \n");
	scanf("%s", &str);
	
	for(int i = 0; i < len; i++){
//		Check if char is within bounds of being 'A ... Z' OR 'a ... z'
		if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
			count++;
			}
		}
	
	printf("There are %d letters in your word\n", count);
	return 0;
}

// Version 2, using strlen(), below.
/*
int main(int argc, char **argv)
{
	char str[len];
	printf("Input a word to have it's character count returned: \n");
	scanf("%s", &str);
	
	printf("There are %d letters in your word\n", strlen(str));
	return 0;
}
*/