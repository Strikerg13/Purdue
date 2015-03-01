/*Lab.2: Factorials, Fibonacci Numbers, Towers of Hanoi
			- Demonstration of Recursion
----------------------
Name: Andrew Stalker
Email: astalke@purdue.edu
Course: CNIT 315
Lab Section: 7 (1:30 - 3:20)
Due Date: 11 February 2015
----------------------
*/
#include <stdio.h>
#include "Lab2.h"

int main() 
{
	char toContinue = 'n';
	do {
	
	int n = 0;
	int i = 0;
	//int ctr = 0;
	
	//Ask the user what recursive function they would like to do
	int userChoice = 0;
	printf("---------------------\n"
		"Enter 1 for Factorials\n"
		"Enter 2 for the Fibonacci Series\n"
		"Enter 3 for the Towers of Hanoi\n"
		"Enter your choice: ");
	scanf("%d", &userChoice);
	
	switch(userChoice)
	{
		//Case 1 : Recursive function to compute the factorial of an integer
		case 1:
			printf("\nEnter a positive integer to calculate it's factorial: ");
			scanf("%d", &n);
	
			if (n < 0)
			{
				printf("Negative numbers are not allowed.\n");
				return 2;
			}
			else 
			{
				i = fact(n);
				printf("Factorial of %d! = %d\n", n, i);

				if ( n >= 13 )
				{
					printf("\nWARNING: factorial greater than 13 exceeds the\n"
							"size of an integer. Incorrect results will be shown.\n");
				}
			}
		break;
		
		//Case 2 : C function takes an integer as a parameter and shows Fibonacci sequence
		case 2:
			printf("\nEnter a positive integer to display the Fibonacci Series: ");
			scanf("%d", &n);
			
			if (n < 0)
			{
				printf("Negative Numbers are not allowed.\n");
				return 2;
			}
			else
			{	
				printf("\nFibonacci series:");
				//for (ctr = 0 ; ctr <= n; ctr++) // for loop runs the recursive function until it reaches the user entered value
				//{							    // for loop is only used to display the fib sequence - total value is  displayed without it using recursion
					printf(" %d", fibonacci(n));
					//i++;
				//}
			}		
		break;
			
		//Case 3 : Towers of Hanoi 
		case 3:
			printf("\nEnter the number of disks(greater than 0): ");
			scanf("%d", &n);
			
			if (n <= 0)
			{
				printf("\nMust enter an integer greater than 0.");
				return 2;
			}
			else
			{
				printf("Tower of  Hanoi involves the moves: \n");
				run_hanoi(n, 'A', 'C', 'B');
			}
		break;
	}
	//Ask the user if they would like to continue
	printf("\nWould you like to continue?(Y/N)");
	scanf(" %c", &toContinue);
	//Do : While statement
	} while (toContinue == 'y' || toContinue == 'Y');
	
return 0;
}
//return 0 - program executed correctly or user entered a 0
//return 1 - user entered a 1
//return 2 - user entered a negative number
//return 3 - Tower of Hanoi if only one disk exists
