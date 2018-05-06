/* In Q3, you wrote a program that prints out the characters of a word in reverse. Now,
write a program that will reverse the characters of the word in place, i.e. using the
same character array that you used to store the word. */

// Note: same program as Q3 as answer to Q3 was already capable of this ^

/* Write a program that reads in a word and prints out its reverse. */

#include <stdio.h>

int main()
{
    char str[50];
    int strLen = 0;

	printf("Enter a word to have it printed in reverse: \n");
	scanf("%s", str);
	
	for(int i = 0; ;i++){
		if(str[i] == '\0'){
            break;
            }
        strLen++;
        }

   

    for(int i = strLen - 1; i >= 0; i--){
        printf("%c", str[i]);
        }
		
	printf("\n");
	return 0;

}