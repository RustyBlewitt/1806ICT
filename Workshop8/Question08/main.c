/* Using your program in Q2, extend it as follows:
	a. Extend the struct for the student records such that the marks for the different subjects
		is itself a struct consisting of subject name (string), mark (float), and grade (char)
	b. Manually create a text file “input.txt” that contains the data for 10 students. The data is
		in the format [{first name} {last name} {student ID} {English marks} {Maths marks} 
		{Physics marks}]
	c. Have your program read in the data from the text file “input.txt”, and store the data in
		an array of structures
	d. Your program will assign the relevant grade to each student’s subject marks,
		according to the grades table shown in Q2
	e. Your program will print out the students’ records into a text file “output.txt”
	f. Your program will find and print out to the console, the highest marks for each subject,
		together with the name of the student with the highest mark for each subject
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char subjectName[20];
	float mark;
	char grade;
	}marks;

typedef struct{
	char firstName[30];
	char lastName[30];
	char id[10];
	marks english;
	marks maths;
	marks physics;
	}record;


// Grades table from Q2
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

int main()
{
	
	FILE *input = fopen("../input.txt", "r");
	FILE *output = fopen("../output.txt", "w");
	
	record records[10];
	
	char lineTemp[100];
	int destTrack = 0;
	
	for(int i = 0; ;i++){ /* For each line of input file */
		//	break if fgets fails
		if(fgets(lineTemp, 100, input) == 0){
			break;
			}
			
		char *token;
		token = strtok(lineTemp, "{[]} ");
		while(token != NULL){
			if(destTrack == 0){
				strcpy(records[i].firstName, token);
				}
			else if(destTrack == 1){
				strcpy(records[i].lastName, token);
				}
			else if(destTrack == 2){
				strcpy(records[i].id, token);
				}
			else if(destTrack == 3){
				strcpy(records[i].english.subjectName, "English");
				records[i].english.mark = strtof(token, NULL);
				records[i].english.grade = returnGrade(records[i].english.mark);
				}
			else if(destTrack == 4){
				strcpy(records[i].maths.subjectName, "Maths");
				records[i].maths.mark = strtof(token, NULL);
				records[i].maths.grade = returnGrade(records[i].maths.mark);
				}
			else if(destTrack == 5){
				strcpy(records[i].physics.subjectName, "Physics");
				records[i].physics.mark = strtof(token, NULL);
				records[i].physics.grade = returnGrade(records[i].physics.mark);
			}
			
			//	After each word strtok grabs, up destTrack to keep track of where next word belongs
			destTrack++;
			
			token = strtok(NULL, "{[]} ");
			}
		fprintf(output, "Record %d:\n", i);
		fprintf(output, "First Name: %s\nLast Name: %s\n", records[i].firstName, records[i].lastName);
		fprintf(output, "ID: %s\n", records[i].id);
		fprintf(output, "English mark: %f, grade: %c\n", records[i].english.mark, returnGrade(records[i].english.mark));
		fprintf(output, "Maths mark: %f, grade: %c\n", records[i].maths.mark, returnGrade(records[i].maths.mark));
		fprintf(output, "Physics mark: %f, grade: %c\n", records[i].physics.mark, returnGrade(records[i].physics.mark));
		destTrack = 0;
	}
/*	v Output top mark for each subject v */

	//	Index numbers in records[]
	int topEnglish = 0;
	int topMaths = 0;
	int topPhysics = 0;
	
	//	Note: this program does not acknowledge a tie for equal first marks at this point in time
	for(int i = 1; i < 10; i++){
		if(records[i].english.mark > records[topEnglish].english.mark){
			topEnglish = i;
			}
		if(records[i].maths.mark > records[topMaths].maths.mark){
			topMaths = i;
			}
		if(records[i].physics.mark > records[topPhysics].physics.mark){
			topPhysics = i;
			}
		}
		
	printf("Student reports have been filed in 'output.txt'\n\n");
		
	printf("Top mark in English: %.2f, achieved by student: %s\n", records[topEnglish].english.mark, records[topEnglish].id);
	printf("Top mark in Maths: %.2f, achieved by student: %s\n", records[topMaths].maths.mark, records[topMaths].id);
	printf("Top mark in Physics: %.2f, achieved by student: %s\n\n", records[topPhysics].physics.mark, records[topPhysics].id);

	return 0;
}
