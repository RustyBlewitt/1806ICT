/* Write a program that reads in a word, and truncates it to n characters. If the word
length is already shorter than n characters, it remains as it is. */

#include <stdio.h>

int main(int argc, char **argv)
{
    char str[50];
    int num;

    printf("Enter a word then an integer to have your word truncated to your integer's amount of letters\n");
    scanf("%s %d", str, &num);

    char newStr[num + 1];
   
    for(int i = 0; i < num; i++){
        newStr[i] = str[i];
        }

    printf("%s\n", newStr);   

	return 0;
}