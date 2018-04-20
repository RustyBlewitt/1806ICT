/* Write a function that takes in a floating point number, and separates it into three parts:
a sign (+ if it’s greater than zero, - if it’s less than zero, or blank if it’s exactly zero), a
whole number magnitude, and a fractional part. Your function definition should look
something like this:
void separate(double num, char *sign, int *wholePart, double *fracPart)
{
…
}
 */

#include <stdio.h>
#include <math.h>

void separate(double num, char *sign, int *wholePart, double *fracPart){
	if(num > 0){
		*sign = '+';
		}
	if(num < 0){
		*sign = '-';
		}
		
	*wholePart = (int)floor(num);
	
	*fracPart = (double) num - *wholePart;
}
	
int main(int argc, char **argv)
{
	double myNum;
	char sign = 0; 
	int whole;
	double fractional;
	
	printf("Enter a double to have it broken down into it's sign bit, whole num magnitude, fractional part\n");
	scanf("%lf", &myNum);
	
	separate(myNum, &sign, &whole, &fractional);
	
	printf("Sign = %c\nWhole number magnitude = %d\nFractional part = %lf\n", sign, whole, fractional);
}
