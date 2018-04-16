// This program returns the average of 3 numbers

#include <stdio.h>
int main()

{

    float x, y, z;

    printf("Input 3 numbers to have the average returned\n");

    scanf( "%f %f %f", &x, &y, &z);

    printf("Average = %.2f\n", (x+y+z) / 3.0);

    return 0;

    }