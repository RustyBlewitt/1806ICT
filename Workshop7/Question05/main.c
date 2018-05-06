/* Write a program that reads in a word and two characters. It prints out the word
modified in such a way that every occurrence of the first character is replaced with the
second character. */

#include <stdio.h>

int main()
{
    char str[50];
    char ch1;
    char ch2;

	printf("Enter a word then two characters to have, if they exist, them switched inside the word\n");
    scanf("%s %c %c", str, &ch1, &ch2);
	
    for(int i = 0; i < 50; i++){
        if(str[i] == ch2){
            str[i] = ch1;
            }/* If current iter of str's index's contains same char as ch2, change it to ch1 */
        else if(str[i] == ch1){
            str[i] = ch2;
            }/* Else if current iter of str's index's contains same char as ch1, change it to ch2 */
        }

    printf("%s\n", str);
	
	return 0;
}