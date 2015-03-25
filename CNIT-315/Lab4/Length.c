

// LENGTH OF A STRING:
//====================
int test_length()
{
  // 2 test strings with every char on the keyboard.
  char test_string1[] = "~!@#$^&*()_+|}{POIUYTREWQASDFGHJKL:?><MNBVCXZ1234567";
  char test_string2[] = "890-=qwertyuiop[]asdfghjkl;'/. ,mnbvcxz";
  
  int valid1 = strlen(test_string1); // holds the correct length of string1
  int valid2 = strlen(test_string2); // holds the correct length of string2
  
  int test_length1 = 0; // vars for the coders' function outputs.
  int test_length2 = 0;
  
  // Run the coders' function to get the string lengths.
  test_length1 = FindLength(test_string1);
  test_length2 = FindLength(test_string2);
  
  // If the functions don't return the correct lengths, return error code.
  if ((test_length1 != valid1) || (test_length2 != valid2))
    return 1;
    
  // If nothing fails, return success.
  return 0;
}
