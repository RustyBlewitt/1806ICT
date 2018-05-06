/* Modify your program in Q10 so that blanks and capital letters are ignored in the
matching process. Under these new rules, the following are examples of palindromes:
“Anna” “a man a plan a canal Panama” “Amy must I jujitsu my ma” */

#include <stdio.h>

int main(int argc, char **argv)
{
	char str[100];
	int strLen = 0;
	//	is palin until proven otherwise in for loop if statement
	int palinFlag = 1;
	
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
		//	Bulletproof if input is alpha, very unlikely false negative's if not
		if( (str[up] != str[down]) && (str[up] != str[down] + 32) && (str[up] != str[down] - 32) ){
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
