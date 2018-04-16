/* An integer is said to be a perfect number if its factors, including 1 (but not the number itself),
sums to the number. For example, 6 is a perfect number because 6 = 1 + 2 + 3. Write a
function that prints out all perfect numbers between 1 and 1000. */

#include <stdio.h>

int perfect(int num){
	int temp = 0;
	//	Loop factors of this num, adding them to temp
	for(int i = 1; i < num; i++){
		if(num % i == 0){
			temp += i;
			}
		}
	//	If sum of factors (temp) is equal to original number (num) return 1, else 0.
	if(temp == num){
		return 1;
		}
	else{
		return 0;
		}
}

int main(int argc, char **argv)
{
	printf("The perfect numbers between 1 and 1000 are: \n");
	
	for(int i = 1; i <= 1000; i++){
		//	Check total sum (temp) for equality with original number.
		if(perfect(i)){
			printf("%d\n", i);
			}
		}
	
	return 0;
}
