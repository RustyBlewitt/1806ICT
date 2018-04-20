/*  Following the steps below, write a C program to help a prospective borrower calculate
	the monthly payment for a loan. The program should prompt the user for the principal,
	the percent interest rate per year, and the duration of the time (in months) over which
	the loan will be repaid. The program should then print an information summary. We
	will use the following formulas to calculate the monthly payment of a loan.
	
		IM = IY / (12 × 100)
		P = (1+ IM)^D
		Q = P / P - 1
		MP = PR × IM × Q
	 
	where:
		D: Duration (in months) over which loan will be repaid.
		IY: Interest rate per year (as percentage)
		IM: Interest rate per month (decimal)
		PR: Principal (the amount of the loan)
		MP: Monthly payment


(a) Write a C function:
	void inputInfo ( double *amountPtr, double *yearlyRatePtr, int *nmonthsPtr )
	 
	which prompts the user to input the amount of the loan, the interest rate per year
	(i.e., annual rate), and the number of months to amortize the loan. The input
	values should be stored in the variables pointed to by the pointers amountPtr,
	yearlyRatePtr and nmonthsPtr, respectively. For example:
		Amount of loan (Principal)? 3000
		Interest rate per year (in percent)? 9
		Number of months to amortize loan? 12
		 * 
(b) Write a C function:
	int NotValidInput (double amount, double yearlyRate, int nmonths)
	 
	which returns 1 (true) if the input values are invalid (for example: the amount is not a
	positive number, and the yearlyRate is less than or equal to 0 or more than 100%). It
	returns 0 (false) otherwise.
	
(c) Write a C function:
	double computeMonthlyRate ( double yearlyRate )
	
	which calculates IM, the interest rate per month in decimal, given the interest rate per year
	(yearlyRate). Use the formula given above.
	 
(d) Write a C function:
	void computeMonthlyPayment ( double amount, double monthlyRate, double *monthlyPaymentPtr, int nmonths )
	 
	which calculates MP, the monthly payment, given the amount of the loan (amount), the
	interest rate per month (monthlyRate), and the number of months to amortize the loan
	(nmonths). Use the formula given above.
	 
(e) Write a C function:
	void printInfo (double amount, double yearlyRate, int nmonths, double monthlyRate, double monthlyPayment )
	
	which prints out an information summary about the loan. Here’s a sample output:
		Amount of loan: 3000.00
		Interest rate/year (percent): 9.00
		Interest rate/month (decimal): 0.007500
		Number of months: 12
		Monthly payment: 262.35
		
(f) Using the functions you have written in steps (a) to (e), write a C program which: 
	• Prompts the user for the principal, the percent interest rate per year, and the number
	of months to amortize the loan.
	• Checks if the input values are valid. If any of the input values are invalid, the program
	should end with a simple error message (e.g., “Invalid input”).
	• Calculates the interest rate per month.
	• Calculates the monthly payment
	• Prints the information summary about the loan.
*/

#include <stdio.h>
#include <math.h>
void inputInfo (double *amountPtr, double *yearlyRatePtr, int *nmonthsPtr){
	double amount, yearlyRate;
	int nmonths;
	
	printf("Loan amount? (principal): ");
	scanf("%lf", &amount);
	
	printf("Interest rate per year? (how many percent): ");
	scanf("%lf", &yearlyRate);
	
	printf("Number of months to amortize loan?: ");
	scanf("%d", &nmonths);
	
	*amountPtr = amount;
	*yearlyRatePtr = yearlyRate;
	*nmonthsPtr = nmonths;
	
	}
	
	int notValidInput (double amount, double yearlyRate, int nmonths){
		//	Returns 0 for valid input, 1 for invalid input
		return (amount < 0 || yearlyRate <= 0 || yearlyRate > 100 || nmonths < 0);
		}
 
	double computeMonthlyRate (double yearlyRate){
		//	Returns monthly interest rate as a decimal, 0.01 = 1 percent
		return (yearlyRate / (12 * 100) );
		}
		
	void computeMonthlyPayment ( double amount, double monthlyRate, double *monthlyPaymentPtr, int nmonths ){
		//	Introduce p and q as parts of required formula
		double p, q;
		p = pow(1 + monthlyRate, nmonths);
		q = p / (p - 1);
		//	Returns monthly payment based off formula at top of file
		*monthlyPaymentPtr = (amount * monthlyRate * q);
		}	
		
	void printInfo (double amount, double yearlyRate, int nmonths, double monthlyRate, double monthlyPayment ){
		printf("\nAmount of loan: %.2lf\n", amount);
		printf("\nInterest rate per year (percentage): %.2lf\n", yearlyRate);
		printf("Interest rate per month (decimal): %.6lf\n", monthlyRate);
		printf("Number of months: %d\n", nmonths);
		printf("Monthly payment: %.2lf\n\n", monthlyPayment);
		}
		
int main(int argc, char **argv)
{
	double amount, yearlyRate, monthlyRate, monthlyPayment;
	int nmonths;
	
	inputInfo (&amount, &yearlyRate, &nmonths);
	
	if(notValidInput(amount, yearlyRate, nmonths)){
		printf("\nInvalid input\nShutting down\n");
		return 0;
		}
	
	monthlyRate = computeMonthlyRate(yearlyRate);
	
	computeMonthlyPayment(amount, monthlyRate, &monthlyPayment, nmonths);
	
	printInfo(amount, yearlyRate, nmonths, monthlyRate, monthlyPayment);
	
	return 0;
}
