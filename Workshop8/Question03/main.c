#include <stdio.h>
#include <math.h>

typedef struct{
		double x; 
		double y;
		}Point;

	
double euclidDist(Point a, Point b){
	return sqrt( pow( (a.x-b.x) , 2) + pow( (a.y-b.y), 2) );
	}

int distEquality(Point a, Point b){
	double dist = euclidDist(a, b);
	if(dist < 0.000001 && dist > - 0.000001){
		return 1;
		}
	return 0;
	}

int main(){
	Point a;
	Point b;
	
	printf("Enter your first point: (x y)");
	scanf("%lf %lf", &a.x, &a.y);
	printf("Enter your second point: (x y)");
	scanf("%lf %lf", &b.x, &b.y);
	
	printf("Distance between points: %f\n", euclidDist(a, b));
	
	if(distEquality(a, b)){
		printf("Your points are equal\n");
	}else{
		printf("Your points aren't equal\n");
		}
	
}
