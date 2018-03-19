// Given inputs of three integers, sort them in ascending order.

#include <stdio.h>

int main()
{
	int x, low, mid, high;
	printf("Enter three integers to have them returned in ascending order.\n");
	scanf("%d %d %d", &low, &mid, &high);
	
	if(low > high){
		x = low;
		low = high;
		high = x;
		}
		
	if(mid > high){
		x = mid;
		mid = high;
		high = x;
		}
	if(low > mid){
		x = low;
		low = mid;
		mid = x;
		}
	printf("%d %d %d\n", low, mid, high);
}
