/* Given these declarations:
int x=0;
int y=0;
int* myPtr=NULL;
int* otherPtr=NULL;
Write a C program to determine the values of myPtr, otherPtr, x, and y, after each
of the following lines of code:
(a) myPtr=&x;
(b) otherPtr=&y;
(c) *myPtr=4;
(d) *otherPtr=*myPtr;
(e) x=5;
(f) otherPtr=myPtr;
(g) *otherPtr=6;
*/
#include <stdio.h>

int main(int argc, char **argv)
{
	int x = 0;
	int y = 0;
	int* myPtr = NULL;
	int* otherPtr = NULL;
	
//	(a) myPtr stores address of var x
	myPtr = &x;
	
//	(b) otherPtr stores address of var y
	otherPtr = &y;
	
//	(c) x is now = 4 as myPtr pointed to x.
	*myPtr = 4;
	
/*	(d) The value in otherPtr = the value in myPtr.  0 = 4
		->	x = 4, y = 4 */
	*otherPtr = *myPtr;
	
//	(e) x = 5
	x = 5;
	
//	(f) otherPtr now also points to x
	otherPtr = myPtr;

//	(g) x = 6
	*otherPtr = 6;
	printf("&x = %p, &y = %p", myPtr, otherPtr);
	printf("\nx = %d y = %d\n", x, y);
	return 0;
}
