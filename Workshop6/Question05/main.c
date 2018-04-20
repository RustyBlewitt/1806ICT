/* . Write a function that shifts the stored value of five character variables in a circular
fashion. Your function should work in the following way. Suppose that c1, c2, …, c5
are variables of type char, and suppose that the values of these variables are ‘A’, ‘B’,
…, ‘E’ respectively. The function call
shift(&c1, &c2, &c3, &c4, &c5)
should cause the variables c1, c2, …, c5 to have the values ‘B’, ‘C’, ‘D’, ‘E’, ‘A’,
respectively. Your function definition should start as follows:
void shift(char *p1, char *p2, char *p3, char *p4, char *p5)
{
…
}
Test your function by writing a program to call it five times and printing out, in turn,
BCDEA, CDEAB, DEABC, EABCD, and ABCDE. */

void shift(char *c1, char *c2, char *c3, char *c4, char *c5)
	{
		char temp = *c5;
		*c5 = *c1;
		*c1 = *c2;
		*c2 = *c3;
		*c3 = *c4;
		*c4 = temp;
		}
#include <stdio.h>

int main(int argc, char **argv)
{
	char c1 = 'A', c2 = 'B', c3 = 'C', c4 = 'D', c5 = 'E';
	int again = 1;
		
	printf("\nEnter 1 to repeat shift or not 1 to close\n");
 
	do{
	shift(&c1, &c2, &c3, &c4, &c5);
	printf("%c %c %c %c %c\n", c1, c2, c3, c4, c5);
	scanf("%d", &again);
	}while(again == 1);
	
	return 0;
}
