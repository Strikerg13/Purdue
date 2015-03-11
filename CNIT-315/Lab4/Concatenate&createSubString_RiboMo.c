#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenate(char* string1, char* string2){
	int length1 = 0;
	int length2 = 0;
	int i = 0;
	char* charPointer;

	//Find the length of the string
	while(1){
		if(string1[length1] == '\0'){
			break;
		}
		length1 ++;
	}
	i = 0;
	while(1){
		if(string2[length2] == '\0'){
			break;
		}
		length2 ++;
	}

	charPointer = malloc((length1 + length2) * sizeof(char));
	
	//Put them together
	for(i = 0;i< (length1 + length2);i++){
		if(i<length1){
			charPointer[i] = string1[i];
		}
		else{
			charPointer[i] = string2[i - length1];
		}
	}

	return charPointer;
}

//0 pass
int checkConcatenate(char* string1,char* string2,char* concatenatedString){
	char *text;
	text = concatenate(string1,string2);
	
	if(strcmp(text,concatenatedString) == 0){
		return 0;
	}
	else{
		return 1;
	}
}

//Create a substring from text[start] to text[end]
char* createSubString(char* text,int start,int end){
	//Validation
	if(start > end){
		printf("Error! start is bigger than end\n");
		char* value = "";
		return value;
	}
	int length = 0;
	while(1){
		if(text[length] == '\0'){
			break;
		}
		length ++;
	}
	if(end >= length){
		printf("Error! end is bigger than the length of the array\n");
		char* value = "";
		return value;
	}

	//init
	char* returnString;
	int i = 0;

	returnString  = malloc((end - start + 1) * sizeof(char));
	for(i = start;i<=end;i++){
		returnString[i - start] = text[i];
	}
	return returnString;
}

//0 pass;
int checkCreateSubString(char* text,int start,int end,char* testString){
	char* string;
	
	string = createSubString(text,start,end);
	if(strcmp(string,testString) == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){

	//Test for Concatenate two string
	char string1[100];
	char string2[100];
	scanf("%s",string1);
	scanf("%s",string2);
	char* text;
	text = concatenate(string1,string2);
	printf("%s\n",text);
	int check = checkConcatenate(string1,string2,"text");
	printf("%d\n",check);

	//Test for create sub string
	char string[100];
	scanf("%s",string);
	printf("%s\n",createSubString(string,1,3));

	return 1;
}