/* Name: Andrew Stalker
   Lab: Section 7 (1:30 - 3:20)
*/

#include <stdio.h>	

//Recursive function for factorials 
	int fact(int n)
	{	
		if (n==0)
		  return 1;
			
		//n(n-1)! if n > 0
		else	
		   return(n * fact(n-1));	//n times the function of n - 1	
	}
	
	//Recursive Function for the Fibonacci series
	//This returns a value until the loop exit criteria is met
	int fibonacci(int n)
	{
		if (n == 0)
			return 0;
		else if (n == 1)
			return 1;
		else
			return (fibonacci(n-1) + fibonacci(n-2)); 
			//Based off F(n) = Fib(n-1) + Fib(n-2)											
	}
	
	void run_hanoi(int disk_num, char from_slot, char to_slot, char spare_slot) 
	{
		if (disk_num == 1)
		{
			printf("\n Move disk 1 from slot %c to slot %c", from_slot, to_slot);
			return;
		} 
		
		//Recursive section
		run_hanoi(disk_num - 1, from_slot, spare_slot, to_slot); //Recursion 1
		printf("\n Move disk %d from slot %c to slot %c\n",disk_num, from_slot, to_slot);
		//run_hanoi(1, from_slot, to_slot, spare_slot);
		run_hanoi(disk_num - 1, spare_slot, to_slot, from_slot); // Recursion 2
	}
