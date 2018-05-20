/* Define a Rect type for rectangles that are parallel to the x-axis and y-axis in the X-Y
Cartesian plane. A rectangle is represented by its lower left and upper right endpoints, with
the points defined using the Point type in Q3. Using Rect in your program,
	a. Write a function to compute the area of a rectangle
	b. Write a function that returns 1 if a point falls within a rectangle, and 0 otherwise. This
		function will take in two parameters, a Point variable and a Rect variable.
	c. Write a main program to test your functions */

#include <stdio.h>

typedef struct{
		double x; 
		double y;
		}Point;

typedef struct{
	//	lower left corner, upper right corner
	Point ll;
	Point ur;
	}Rect;

double calcArea(Rect r){
	// width, height
	double w = r.ur.x - r.ll.x;
	double h = r.ur.y - r.ll.y;
	return w * h;
	}

int pointInRect(Point p, Rect r){
	if(p.x >= r.ll.x && p.x <= r.ur.x && p.y >= r.ll.y && p.y <= r.ur.y){
		return 1;
		}
	return 0;
	}

int main()
{
	Rect r;
	Point p;
	
	printf("Enter (x y) coordinates for lower-left corner of your rectangle: ");
	scanf("%lf %lf", &r.ll.x, &r.ll.y);
	
	printf("Enter (x y) coordinates for upper-right corner of your rectangle: ");
	scanf("%lf %lf", &r.ur.x, &r.ur.y);
	
	printf("Now enter (x y) coordinates for a point to check whether it's inside your rectangle: ");
	scanf("%lf %lf", &p.x, &p.y);
	
	printf("\nThe area of your rectangle is %.2lf square units\n", calcArea(r));
	if(pointInRect(p, r)){
		printf("Your point is inside your rectangle.\n");
		}
	else{
		printf("Your point is outside of your rectangle.\n");
		}
		
	return 0;
}
