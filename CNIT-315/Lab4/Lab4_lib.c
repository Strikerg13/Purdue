#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Lab4_lib.h"
#include <string.h>

char* getStrings(char* string_usage) /*Get a sentence or string from user.*/
{
	char string_test[200];
	int i;
	char* string;

	printf("\nEnter the %s sentence or string: \n",string_usage);
	
	for(i=0; (string_test[i] = getchar())!='\n'; i++)
	{
		;
	}
	string_test[i]='\0';
	
	string = malloc((200) * sizeof(char));

	for(i = 0;i< 200;i++)
	{
		string[i] = string_test[i];
	}

	return string;
}

int findLength(char* string) /*Get the length of the string.*/
{
	int len = 0;
	len = strlen(string);
	return len;
}

int numVowels(char* string1) /*Get the number of vowels in the string.*/
{
	int i;
	int num=0;
	
	for(i = 0; string1[i] != '\0'; ++i)
	{	
		if(string1[i]=='a'||string1[i]=='e'||string1[i]=='i'||string1[i]=='o'||string1[i]=='u'||string1[i]=='A'||string1[i]=='E'||string1[i]=='I'||string1[i]=='O'|| string1[i]=='U')
		{
			num ++;
		}
	}		
	return num;
}

int numWords(char* string1) /*Get the number of words in the string.*/
{
	int i;
	int num = 0;
	
	for(i = 0; string1[i] != '\0'; ++i)
	{
		if(string1[i] == ' ')
		{
			num++;
		}
	}
	num++;
	return num;
}

void alphaNumeric(char* string) /*Determine the type of the string based on the first character.*/
{
	if((string[0]>='A'&&string[0]<='Z')||(string[0]>='a'&&string[0]<='z'))
	{
        printf("\nYou have entered an alphabet");
    }
    else if(string[0]>='0'&&string[0]<='9')
    {
        printf("\nYou have entered a digit");
    }
    else
    {
        printf("\nYou have entered a special character");
    }
}
char* subString(char* string,int start,int end)/*Create a sub-string by sp ecifying the indices*/
{
	if(start > end)
	{
		printf("Error, starting point is larger than ending point\n");
		char* value = "";
		return value;
	}
	
	int length = 0;
	length = findLength(string);
	
	if(end >= length)
	{
		printf("Error, ending point is larger than the length of the array\n");
		char* value = "";
		return value;
	}
	
	char* returnString;
	int i = 0;
	returnString = malloc((end - start + 1) * sizeof(char));
	for(i = start;i<=end;i++)
	{
		returnString[i - start] = string[i];
	}
	return returnString;
}

char* concatenate(char* string1, char* string2)/*Combine two string together*/
{
	int length1 = 0;
	int length2 = 0;
	int i = 0;
	char* combine;

	length1 = findLength(string1);
	length2 = findLength(string2);
	i = 0;
	
	combine = malloc((length1 + length2) * sizeof(char));

	for(i = 0;i< (length1 + length2);i++)
	{
		if(i<length1)
		{
			combine[i] = string1[i];
		}
		else
		{
			combine[i] = string2[i - length1];
		}
	}		
	return combine;
}


void Remove(char* string1, char* string2) /*Remove a specific word from a string*/
{
	int i, j = 0, k = 0, count = 0;
    char str1[20][30];
    
/* Converts the string into 2D array */    
    for (i = 0; string1[i]!= '\0'; i++)
    {

        if (string1[i]==' ')
        {
            str1[k][j] = '\0';
            k++;
            j = 0;
        }

        else
        {
            str1[k][j] = string1[i];
            j++;
        }
    }

    str1[k][j] = '\0';

/* Compares the string with given word */    

    for (i = 0;i < k + 1; i++)
    {
        if (strcmp(str1[i], string2) == 0)
        {
            for (j = i; j < k + 1; j++)
            {
            	strcpy(str1[j], str1[j + 1]);
            	k--;
            }
        }
    }
    for (i = 0;i < k + 1; i++)
    {
        printf("%s ", str1[i]);
    }
}














