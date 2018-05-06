/* Write a program that reads in a word and a character. It will print out the number of
times that character appears in the word. */

#include <stdio.h>

int main()
{
    char str[50];
    char ch;
    int count=0;

	printf("Enter a word then a character to have returned the amount of times the character is in the word\n");
    scanf("%s %c", str, &ch);

    for(int i = 0; i < 50; i++){
        if(str[i] == ch){
            count++;
            } /* If current iteration of str's indexes holds char that's equal to ch, increment count */
        else if(str[i] == '\0'){
            break;
            } /* break on null terminator */

        }
		
    printf("%c appears %d times in %s", ch, count, str);
    return 0;
}