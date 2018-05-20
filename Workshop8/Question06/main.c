/* Write a program that reads in a date, and prints out the next day’s date. You should write the
following two functions in your program to help you do the computation.
The first function isLeapYear determines whether the year is a leap year. This function
takes in one parameter, a Date variable. A year is a leap year if
	• It is a multiple of 4 but not a multiple of 100
	OR
	• It is a multiple of 400
For example, 1996 and 2000 are leap years, but 1900, 2002, and 2100 are not.
The second function numberOfDays determines how many days there are in a given month
for a given year. This function takes in one parameter, a Date variable. This function should
also call the isLeapYear function to help it determine how many days there are in February.
 */
 
#include <stdio.h>

typedef struct{
	int day;
	int month;
	int year;
	}Date;

int isLeapYear(int year){
    int isLeap = 0;
    if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) {
        isLeap = 1;
        }
    return isLeap;
    }

int daysInMonth(int month, int year){
	int dayCount[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//	If leap year, increment Febs days once
	if(isLeapYear(year)){
		dayCount[1]++;
		}
	return dayCount[month-1];
	}
	
int main()
{
	Date date;
	
	printf("Input a date [dd mm yyyy] to have the day after returned: ");
	scanf("%d %d %d", &date.day, &date.month, &date.year);
	
	//	Terminate if invalid input
	if(date.month > 12 || date.day > daysInMonth(date.month, date.year)){
		printf("Incorrect input, please input a valid date in the [dd mm yyyy] format.\n");
		return 1;
		}
	
	//	Add day
	day++;
	
	//	Increment month and reset day if already last day of month
	if(date.day > daysInMonth(date.month, date.year)){
		date.month++;
		date.day = 1;
		}
		
	//	Increment year and reset month if the above pushed month to 13
	if(date.month > 12){
		date.year++;
		date.month = 1;
		}
		
	printf("The next day is: %d/%d/%d\n", date.day, date.month, date.year);
		
	return 0;
}
