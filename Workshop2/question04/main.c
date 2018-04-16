/* In C, variables of type char are stored as a small integer value. Each char is stored
in memory in 1 byte. Most machines represent characters using the ASCII character
set, which associates the integers 0 to 127 with specific characters */

#include <stdio.h>

    int main()
    {
		
    char c = 'A';
	char d = 'B';
	char e[] = "AAA";
	
	printf("c = %d\n", c);
	
	printf("d = %d\n", d);
	
	printf("c + c = %d\n", c + c);
	
	printf("size of c = %d\n", sizeof(c));
	
	printf("size of c + c = %d\n", sizeof(c + c));
	
	printf("size of e = %d\n", sizeof(e));

    }