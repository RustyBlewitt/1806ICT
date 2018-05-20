/* Write a program that uses a structure to store the following details about a student’s
records:
a. First name (a string)
b. Last name (a string)
c. Student ID (a long int)
d. Marks for English (a float)
e. Marks for Mathematics (a float)
f. Marks for Physics (a float)
Your program should use a function to read in the data for a student, and a function to print
out the student’s records, with the marks replaced by the corresponding grade: 
90 <= x 	 	A
80 <= x < 90	B
70 <= x < 80 	C
60 <= x < 70 	D
50 <= x < 60 	E
x < 50 			F

*/

#include <stdio.h>

// Defining struct
typedef struct{
	char firstName[30];
	char lastName[30];
	long int id;
	float english;
	float maths;
	float physics;
	}record;

record buildRecord(){
	record a;
	
	printf("Enter student first name: ");
	scanf("%s", a.firstName);
	
	printf("Enter student last name: ");
	scanf("%s", a.lastName);
	
	printf("Enter student ID: ");
	scanf("%ld", &a.id);
	
	printf("Enter %s's grade for English (percentage): ", a.firstName);
	scanf("%f", &a.english);
	
	printf("Enter %s's grade for Maths (percentage): ", a.firstName);
	scanf("%f", &a.maths);
	
	printf("Enter %s's grade for Physics (percentage): ", a.firstName);
	scanf("%f", &a.physics);
	
	return a;
	}

// Function to return letter representation of grade
char returnGrade(float grade){
	if(90 <= grade){
		return 'A';
		}
	else if(80 <= grade && grade < 90){
		return 'B';
		}
	else if(70 <= grade && grade < 80){
		return 'C';
		}
	else if(60 <= grade && grade < 70){
		return 'D';
		}
	else if(50 <= grade && grade < 60){
		return 'E';
		}
	else{
		return 'F';		
		}
	}
	
// Print a student record
void printRecord(record a){
		printf("Name: %s %s\n", a.firstName, a.lastName);
		printf("Student ID: %ld\n", a.id);
		printf("English: %c\n", returnGrade(a.english));
		printf("Maths: %c\n", returnGrade(a.maths));
		printf("Phsyics: %c\n", returnGrade(a.physics));
	}

int main()
{
	record a = buildRecord();
	printRecord(a);
	return 0;
}
