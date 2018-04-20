/* 1. Write a C program that performs each of the following tasks:
(a) Declare and initialise 'next' to be a character variable with the value 'B'.
(b) Declare and initialise 'current' to be a character variable with the value 'y'.
(c) Declare 'ptr' to be a pointer to objects of type 'char'.
(d) Assign the address of 'current' to the variable 'ptr'.
(e) Change the value of the object pointed to by 'ptr' to '0'.
(f) Assign the address of 'next' to the variable 'ptr'.
(g) Change the value of the object pointed to by 'ptr' to 'd'.
(h) Print the address stored in 'ptr'.
(i) What values are stored in 'next' and 'current'? */

#include <stdio.h>

int main(int argc, char **argv)
{
//	(a)
	char next = 'B';
//	(b)
	char current = 'y';
//	(c)
	char *ptr;
//	(d)
	ptr = &current;
//	(e)
	*ptr = '0';
//	(f)
	ptr = &next;
//	(g)
	*ptr = 'd';
//	(h)
	printf("%p", ptr);
//	(i) Next = d, current = 0
	printf("\nNext = %c\nCurrent = %c", next, current);
	
	return 0;
}
