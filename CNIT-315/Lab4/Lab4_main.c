/*Lab4
 *Name: CoderGroup_Andy_Tang
 *Lab Group: 7
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Lab4_lib.h"
#include <string.h>

int main()
{
 	char* string1;	
	char* string2;
 	int result_int = 0;
 	char* result_char;
 	int select = 0;
 	
 	printf("-----------Program Started-------------");
 	
 	string1 = getStrings("original");
 	string2 = getStrings("additional(for editing the original)");
 	
 	printf("\nPlease select what do you want to do with the string: \n(1=Check the number of vowels;\n 2=Check the number of words;\n 3=Check the length of the string;\n 4=Check if the string is alphabetical or numerical;\n 5=Create a substring using indices;\n 6=Concatenate original and additional strings;\n 7=Remove the additional string from the original sentence.)\n");
 	scanf("%d", &select);
 	if(select == 1)
 	{
 		result_int = numVowels(string1);
 		printf("The number of vowels in this string is %d.",result_int);
 	}
 	if(select == 2)
 	{
 		result_int = numWords(string1);
 		printf("The number of words in this string is %d.",result_int);
 	}
 	if(select == 3)
 	{
 		result_int = findLength(string1);
 		printf("The length of this string is %d.",result_int);
 	}
 	if(select == 4)
 	{
 		alphaNumeric(string1);
 	}
 	if(select == 5)
 	{
 		int indx1, indx2;
 		printf("Enter the starting point:");
 		scanf("%d", &indx1);
 		printf("Enter the ending point:");
 		scanf("%d", &indx2);
 		result_char = subString(string1,indx1,indx2);
 		printf("The created sub_string is %s.", result_char);
 	}
 	if(select == 6)
 	{
 		result_char = concatenate(string1, string2);
 		printf("The combined string is %s.",result_char);
 	}
 	if(select == 7)
 	{
 		Remove(string1, string2);
 	}
 	printf("\n-----------Program Ended-------------\n");
 	return 0;
	
	
}
