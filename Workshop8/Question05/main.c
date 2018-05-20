/* Write a program to add two fractions, and display the resultant fraction. Use a structure to
	store the numerator and denominator. Write a function that takes in two Fraction variables, 
	and return the sum in another Fraction. */

#include <stdio.h>

typedef struct{
	//	Numerator, denominator
	int num;
	int den;
}Fract;

Fract addFract(Fract a, Fract b){
	Fract x;
	if(a.den == b.den){
		x.num = a.num + b.num;
		x.den = a.den;
		}
	else{
		x.num = (a.num * b.den) + (a.den * b.num);
		x.den = a.den * b.den;
		}
	return x;
	}

int main()
{
	Fract a, b;
	
	printf("For fraction addition please enter first fraction (x/y): ");
	scanf("%d/%d", &a.num, &a.den);
	printf("Now, enter second fraction (x/y): ");
	scanf("%d/%d", &b.num, &b.den);
	
	Fract x = addFract(a, b);
	
	if(x.num == x.den){
		printf("Result: 1\n");
		}
	else{
		printf("Result: %d/%d\n", x.num, x.den);
		}
	return 0;
}
