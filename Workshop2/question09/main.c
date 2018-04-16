/* A circle has 2pi Radians. A radian is the angle that is made when you have a pizza slice where each edge
   of the slice and the crust length are all 1 radius long. */
   
#include <stdio.h>
#include <math.h>

int main()
{

    float deg, rads;

    printf("How many degrees is your angle?\n");
    scanf("%f", &deg);

    rads = (deg/180) * M_PI;

    printf("There are %f radians in your angle", rads);

}