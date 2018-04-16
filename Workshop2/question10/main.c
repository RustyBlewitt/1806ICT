// This programs takes an input of seconds and outputs the same time in hours, mins and seconds.

#include <stdio.h>

int main()
{

    int inp, seconds, mins, hours;

    printf("Enter seconds to be converted:\n");
    scanf("%i", &inp);

    hours = inp/3600;
    mins = (inp%3600) / 60;
    seconds = (inp%60);

    printf("%i hours, %i minutes, %i seconds\n", hours, mins, seconds);

}