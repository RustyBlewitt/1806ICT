// Experiment with the scanf and printf function as discussed in lecture

#include <stdio.h>

int main()
{
    int testInt;
    printf("What number would you like to print?\n");
    scanf("%d", &testInt);
    printf("Here you go: %d\n", testInt);
    }