/*  Andrew Stalker */

/* Lab 4 tester to determine if a character is alpha-numeric */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //for standard functions isalpha() and isdigit()

int main() {
	/*Variables*/
	char userInput;

	/*create menu*/
	printf("\n<----------------------->\n");
	printf("\nEnter anything:");
	scanf("%c", &userInput);

	if(isalpha(userInput)) 
	{
		printf("\n--It's a letter!--\n");
	}
	else if (isdigit(userInput))
	{
		printf("\n--It's a number!--\n");
	}
	else
	{
		printf("\n--It's something else?--\n");
	}

return 0;
}
