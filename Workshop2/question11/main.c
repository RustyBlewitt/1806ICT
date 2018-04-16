/* This program takes a point in 24 hour time, then another amount of time to add to it. The output is the resulting
   point in 24 hour time. */

#include <stdio.h>

int main()
{

    int totalSecs, hrs, mins, secs, hrsInc, minsInc, secsInc, hrsTotal, minsTotal, secsTotal;

    printf("Input 24hr time in hours, mins and secs: ");
    scanf("%i %i %i", &hrs, &mins, &secs);

    totalSecs = hrs * 3600 + mins * 60 + secs;

    printf("Input the time incrementation in hours, mins and secs: ");
    scanf("%i %i %i", &hrsInc, &minsInc, &secsInc);   

    totalSecs += hrsInc * 3600 + minsInc * 60 + secsInc;

    hrsTotal = totalSecs/3600;
    minsTotal = (totalSecs%3600)/60;
    secsTotal = totalSecs%60;

   

    printf("Current time is: %i hours, %i mins and %i seconds\n", hrsTotal, minsTotal, secsTotal);

}