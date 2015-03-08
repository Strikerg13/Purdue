#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char my_string[] = "hel\0l\0o";
  int my_string_length = 0;

  printf("\n my string = %s \n", my_string);
  printf("my_string length = %d \n", strlen(my_string));
  
  my_string_length = sizeof(my_string) - 1;
  
  printf("\n %d \n", my_string_length);
  
  return 0;
}
