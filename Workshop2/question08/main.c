// Write a program that takes the area and width of a rectangle, to have the height returned to the user

#include <stdio.h>

int main(){

    float area, width, height;
	
    printf("What is the area of your rectangle in squared metres?\nArea: ");
    scanf("%f", &area);

    printf("What is the width of your rectangle in metres?\nWidth: ");
    scanf("%f", &width);


    height = area/width;


    printf("The height of your rectangle is: %f", height);
    }