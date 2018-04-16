/* Given the user input of a point (x, y) and a rectangle (x, y, w, h), display whether the
point is inside the rectangle. */

#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, recX, recY, w, h;
	
	printf("Input a coordinate for the center of your rectangle followed by it's width and height e.g. x y w h, then press enter\n");
	scanf("%d %d %d %d", &recX, &recY, &w, &h);
	printf("\nNow input a coordinate to check if it is inside your rectangle e.g. x y\n");
	scanf("%d %d", &x, &y);
	
//	Abs dist between x1 and x2 = sqrt[ (x1 - x2)^2 ]. If difference > w/2, is out of rect

	if(sqrt( pow((x - recX), 2) ) > w/2){
		printf("\nYour point is not in your rectangle\n.");
		return 0;
	}
	
	if(sqrt( pow((y - recY), 2) ) > h/2){
		printf("\nYour point is not in your rectangle\n.");
		return 0;
	}
	
	printf("\nYour point is inside your rectangle\n");
	return 0;
}
