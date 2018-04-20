/* In the following program, the invocation of changeIt() seems to have no effect.
Can you explain why? */

/* Answer: In main, when change it is invoked, the pointer operations that take place are local only to
   what's created in or what's been passed into (a copy of the value of array) the function itself */
#include <stdio.h>

void changeIt(int array[])
{
	int i = 888;
	int *ptr = &i;
	array = ptr; // array is assigned a different value
	printf("\n\n%p\n\n", array);
}
int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	int *arrayPtr;
	arrayPtr = array;
	printf("arrayPtr has the value %p\n", arrayPtr);
	changeIt(array);
	arrayPtr = array;
	printf("arrayPtr has the value %p\n", arrayPtr);
	return 0;
}