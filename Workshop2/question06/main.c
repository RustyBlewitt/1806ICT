/* This program distinguishes signed ints (d) and unsigned ints (u). The former of which has a smaller max val
   as one of it's bytes are used for indicating positivity/negativity, where the latter has no negative values
   but a max value twice as large. */
   
#include <stdio.h>

int main()
{
 int bigNumber = 2000000000 + 2000000000;
 printf("%d %u\n", bigNumber, bigNumber);
}