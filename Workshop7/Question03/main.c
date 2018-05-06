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