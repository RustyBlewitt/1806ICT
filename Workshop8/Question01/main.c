/* Declare a structure type, Order, that is suitable for containing information about the orders in
a florist's shop. The structure should contain members for the type of flower (a string), the
delivery time in days (an integer), the price (a float), and the customer's name (a string). 
	a. Write a function that will read in values for each member of an Order from the
	keyboard, and return the completed struct
	b. Write another function that prints out the values in an Order
	c. Write a main program to test your functions
	d. Now extend the structure such that a customer's name is itself a structure consisting
		of a first name (string) and a last name (string). This means that the Order structure is
		now a nested structure. Revise your program from parts (a-c) to handle this extension. */
#include <stdio.h>

	typedef struct{
		char first[20];
		char last[20];
		}Name;

	typedef struct{
		char type[20];
		int delivery;
		float price;
		Name name;
		}Order;

	Order orderBuilder(){
		Order a;
		printf("Enter type of flower to be ordered: ");
		scanf("%s", a.type);
		
		printf("Enter delivery time of order in days: ");
		scanf("%d", &a.delivery);
		
		printf("Enter price of order: ");
		scanf("%f", &a.price);
		
		printf("Enter a first name for the order: ");
		scanf("%s", a.name.first);
		
		printf("Enter a last name for the order: ");
		scanf("%s", a.name.last);
		
		return a;
	}

void printValues(Order a){
	printf("Type of flower: %s\n", a.type);
	printf("Delivery time: %d days\n", a.delivery);
	printf("Price: $%.2f\n", a.price);
	printf("For: %s %s\n", a.name.first, a.name.last);
	}

int main()
{
	Order a = orderBuilder();
	printValues(a);
	return 0;
}
