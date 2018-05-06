#include <stdio.h>
#include <ctype.h>
#define len 50

int main()
{
	char str[len];
	printf("Enter a word to have upper-case chars switched to lower and vice-versa:\n");
	scanf("%s", &str);
	
	for(int i = 0; i < len; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = tolower(str[i]);
		}
		else if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = toupper(str[i]);
		}
	}
	printf("%s\n", str);
}
