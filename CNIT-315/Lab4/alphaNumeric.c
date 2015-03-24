/*  Andrew Stalker */
/* Lab 4 tester to determine if a character is alpha-numeric */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //for standard functions isalpha() and isdigit()
#include <time.h>

int main() {
	/*Variables*/
	char userInput;

	/*create menu*/
	printf("\n<----------------------->\n");
	printf("\nEnter anything:");
	scanf("%c", &userInput);

	/*Function to Test*/
	alphaNumeric(char c);
	
	char randChar = ‘ ‘;
	int counter = 0;
	int randNum = 0;

     // Provide seed for the random number     
	// generator.
      srand(time(NULL));
      for (counter = 0; counter < 10; counter++)
      {
          // First, pick a number between 0 and
          // 25.
          randNum = 26 * (rand() / (RAND_MAX +
              1.0));

          // The ASCII code for ‘a’ is 97, so
          // add 97 to the random number to get
          // a lower case letter.
          randNum = randNum + 97;

          // Type cast to character to convert
          // it to a char type.
          randChar = (char) randNum;

         printf (“Random char: %c\n“, randChar);
	
return 0;
}
