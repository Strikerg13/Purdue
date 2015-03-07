#include <stdio.h>
#include <string.h>

int main()
{
  // Initiallize a string with the escape character \0 in it to
  // trick the function into thinking there are only 3 chars 
  // in the array.
  char my_string[] = "hel\0l\0o";
  int my_string_length = 0;

  // print the array to confirm it.
  printf("\n my string = %s \n", my_string);
  printf("my_string length = %d \n", strlen(my_string));
  
  // calculate the amount of memory the string actually uses.
  // char = 1 byte
  // Subtract 1 to take off the \0 that designates the end of the 
  // array.
  my_string_length = sizeof(my_string) - 1;
  
  
  // Print the true size of the array.
  printf("\n %d \n", my_string_length);
  
  
  return 0;
}
