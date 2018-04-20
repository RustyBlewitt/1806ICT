/* Write a function that alphabetically orders the stored values of three characters.
Suppose for example that c1, c2, and c3 are character variables having the values
‘C’, ‘B’, and ‘D’, respectively. Then the function call
order_chars(&c1, &c2, &c3)
should cause the stored values of c1, c2, and c3 to be ‘B’, ‘C’, and ‘D’, respectively.
Write a program that tests your function. */


// This function doesn't support different cases
void orderChars(char *c1, char *c2, char *c3){
	char temp;
	if(*c1 > *c3){
		temp = *c3;
		*c3 = *c1;
		*c1 = temp;
		}
	if(*c1 > *c2){
		temp = *c2;
		*c2 = *c1;
		*c1 = temp;
		}
	if(*c2 > *c3){
	temp = *c2;
	*c2 = *c3;
	*c3 = temp;
	}
}

#include <stdio.h>

int main(int argc, char **argv)
{	
	char c1, c2, c3;
	
	printf("Input three letters of the same case to have them returned in alphabetical order\n");
	scanf("%c %c %c", &c1, &c2, &c3);
	orderChars(&c1, &c2, &c3);
	printf("%c %c %c\n", c1, c2, c3);
	
	return 0;
}
