/* Given the user input of a point (x, y) and a circle (x, y, r), display whether the point is
inside the circle */

#include<stdio.h>
#include<math.h>

int main(){
	
	int x, y, circX, circY;
	float r, dist;
	
	printf("\nInput a coordinate for a center of a circle, followed by it's radius [x y r]:\n ");
	scanf("%d %d %f", &circX, &circY, &r);
	printf("\nInput a coordinate for a point to check whether it's in your circle:\n");
	scanf("%d %d", &x, &y);
	
	dist = sqrt((x-circX)*(x-circX) + (y-circY)*(y-circY));
	

	if(dist > r){
		printf("\nYour point is not in your circle\n");
		return 0;
		}
		
	printf("\nYour point is in your circle\n");
	
	}