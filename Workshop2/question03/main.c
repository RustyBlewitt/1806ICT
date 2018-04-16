// This program computes the size of some fundamental types.

#include <stdio.h>

int main()
{
    // 1 byte
    printf("char : %u byte \n", sizeof(char));

    // 2 bytes
    printf("short int : %u bytes\n", sizeof(short int));

    // 4 bytes
    printf("int : %u bytes\n", sizeof(int));

    // 4 bytes
    printf("long int : %u bytes\n", sizeof(long int));
	
    // 4 bytes
    printf("unsigned int: %u bytes\n", sizeof(unsigned int));

    // 4 bytes
    printf("float : %u bytes\n", sizeof(float));

    // 8 bytes
    printf("double : %u bytes\n", sizeof(double));

    // 12 bytes
    printf("long double : %u bytes\n", sizeof(long double));

	return 0;

}