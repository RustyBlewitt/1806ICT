/* This program takes inputs of: desired grade, minimum score to reach desired grade, your current average score in
   your course, how much your final exam counts as a percentage of your course. Then outputs what percentage you will
   need to score on your final exam to reach your desired grade. */

#include <stdio.h>

int main()
{
	
	char desired;
	float goal, currentTotal, examWeighting, needed, accWeighting;

	printf("Enter desired grade: A, B, C, D or F \n");
    scanf("%c", &desired);

	printf("Enter minimum score required for the desired grade: \n");
    scanf("%f", &goal);

    printf("Enter current average score in your course: \n");
    scanf("%f", &currentTotal);

    printf("Enter how much your final exam counts as a percentage of the course: \n");
    scanf("%f", &examWeighting);

	accWeighting = 100 - examWeighting;	
	needed = (goal-(currentTotal*(accWeighting/100))) / (examWeighting/100);

	printf("You need %.2f percent on your final exam to achieve a grade of %c\n", needed, desired);
}