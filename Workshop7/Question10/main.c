	/* .A palindrome is a string phrase that reads the same backwards as well as forwards.
	Examples of palindromes are “ABCDCBA”, “otto”, “i am ma i”, “C”. Write a program
	that reads in a line of text, and prints out whether or not that line of text is a
	palindrome.*/

	#include <stdio.h>

	int main(int argc, char **argv)
	{
		char str[100];
		int strLen = 0;
		int palinFlag = 1; /* is palin until proven otherwise in for loop if statement */
		
		printf("Enter a word to determine whether it is a palindrome or not\n");
		fgets(str, 100, stdin);
		
		for(int i = 0;;i++){
			if(str[i] == '\n'){
				break;
				}
			strLen++;
			}
			
		int down = strLen - 1;
		for(int up = 0; up < down; up++){
			if(str[up] != str[down]){
				palinFlag = 0;
				break;
				}
			down--;
			}
		
		if(palinFlag){
			printf("Your word is a palindrome\n");
		}else{
			printf("Your word is not a palindrome\n");
			}
			
		return 0;
	}
