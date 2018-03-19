/* The value for the mathematical constant π can be calculated from the infinite series:
		pi = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) ... etc.
		 
	A rough approximation of the π value is 3.14. Write a program to determine how
		many terms of the infinite series is required before you first get 3.14. Use a tolerance
		value of 0.001. 
 */

#include <stdio.h>


int main()
{
	float piVal = 0;
	int denom = 1, odd = 0, count = 0;
	
	while(piVal <= 3.14 - 0.001 || piVal >= 3.14 + 0.001){
		
//	
		if(odd == 1){
			piVal -= (float)4/denom;
			odd--;
			printf("- 4 / %d = %f\n", denom, piVal);
		}
		else{
			piVal += (float)4/denom;
			odd++;
			printf("+ 4 / %d = %f\n", denom, piVal);
			}
//	Double increment demoninator
		denom += 2;
		count++;
	}
	
	printf("* * * * * * * * * * * * * * * * *\n %d Iterations to get: %f (within 0.001 of Pi)\n* * * * * * * * * * * * * * * * *\n", count, piVal);
}
