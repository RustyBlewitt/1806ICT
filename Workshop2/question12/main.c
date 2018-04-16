// This program takes integer inputs of A, B and C, then solves the polynomial equation ax^2 + bx + c = 0

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2;

    printf("Input values for A, B and C to solve the polynomial equation ax^2 + bx + c = 0: \n");

    scanf("%i %i %i", &a, &b, &c);

    x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);

    x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

    printf("X1 = %f and X2 = %f", x1, x2);

    }