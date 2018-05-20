/* Given a structure that stores a time (in 24-hour format) as follows:
struct time {
	int hour;
	int min;
	int secs;
};
typedef struct time Time;
Write a function elapsed_time that takes as its arguments two Time structures and returns
a Time structure that represents the elapsed time in (hours, min, and secs) between
the two times. Write a main program to test your function.
Sample run:
Input Output
3 45 15 9 44 3 5 hours 58 min 48 secs */

#include <stdio.h>

typedef struct{
	int hours;
	int min;
	int secs;
	}Time;

Time elapsedTime(Time t1, Time t2){
	Time elapsed;
	elapsed.hours = t2.hours - t1.hours;
	
	if(t1.min > t2.min){
		t2.min += 60;
		elapsed.hours--;
		}
		
	elapsed.min = t2.min-t1.min;
	
	if(t1.secs > t2.secs){
		t2.secs += 60;
		elapsed.min--;
		}
		
	elapsed.secs = t2.secs - t1.secs;
	
	return elapsed;
	}

int main()
{
	Time t1, t2;
	
	printf("Input two points in 24hr time to have the time between them returned.\nTime 1 (hh mm ss):");
	scanf("%d %d %d", &t1.hours, &t1.min, &t1.secs);
	
	printf("Time 2 (hh mm ss):");
	scanf("%d %d %d", &t2.hours, &t2.min, &t2.secs);
	
	if(t1.hours > 24 || t2.hours > 24 || t1.min > 60 || t2.min > 60 || t1.secs > 60 || t2.secs > 60){
		printf("Invalid input, please enter valid points in 24hr time.\n");
		return 1;
		}
	
	Time elapsed = elapsedTime(t1, t2);
	
	printf("\nTime between: %d hours, %d min, %d secs\n", elapsed.hours, elapsed.min, elapsed.secs);
	
	return 0;
}
