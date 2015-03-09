/* Name:Shivaadas Annamalai Silvadas
*** This program finds the number of words in a string or sentence.
*/ 
#include <stdio.h>
#include <string.h>
     
int main(){

	char userInput[200];
	int wordCount = 0, i;     

  printf("Please enter the string(sentence) you wish:\n");
  scanf("%[^\n]s", userInput);

  for (i = 0; userInput[i] != '\0'; i++){

		if (userInput[i] == ' '){

			wordCount++;
			}    

    }

	printf("The number of words in the string are: %d\n", wordCount + 1);

	return 0;
}
