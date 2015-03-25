

// CONCATENATE TWO STRINGS:
//=========================
int test_concatenate_strings()
{
  char string1[] = "hello ";  // Test if function will combine these 2
  char string2[] = "world!";  // strings correctly and create a match 
  char string3[] = "hello world!"; // for string3.
  
  char coder_string[200]; // The combined output string of the coders' function
  
  char string4[130];  // Combining these 2 strings should cause an error.
  char string5[80];   // 130 + 80 = 210 > 200 char limit.
  
  int valid = 1;
  
  // Test if the function works as expected.
  //---------------------------------------
  // run the concatenate function to create an output string.
  coder_string = concatenate(string1, string2);
  
  // compare the coders' output to the correct answer
  valid = strcmp(coder_string, string3);
  
  // return fail if the 2 strings are not the same
  if (valid == 1)
    return 1;
  
  // Test if the function will create a string larger that the 200 char limit.
  //--------------------------------------------------------------------------
  // the coder function should return 1 for an error.
  coder_string = concatenate(string4, string5);
  
  // return fail if the function doesn't return an error.
  if (coder_string != '1')
    return 1;
    
  // Return 0 if the function passes all the checks.
  return 0;
}
