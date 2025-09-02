// Read a line of text from the user using fgets and then print it using puts.
#include <stdio.h>

int main()
{
      // Declare a character array (string) with size 100
      char str[100];

      // Prompt the user to enter a string
      printf("\nEnter a string: ");

      // fgets reads input from stdin (keyboard) and stores it in str
      // sizeof(str) ensures that we don't read more characters than the array size
      fgets(str, sizeof(str), stdin);

      // Display the string entered by the user
      printf("\nEntered string is: ");

      // puts prints the string followed by a newline automatically
      puts(str);

      return 0; // End of program
}

/*
Other things to understand:-

1. fgets() is a function used to read a string (line of text) safely from an input stream (like stdin → keyboard input, or from a file).

2. sizeof() is a compile-time operator in C that returns the size (in bytes) of a data type or variable.

3. puts() is a standard library function in C (declared in <stdio.h>). It is used to print a string to the console (standard output). Unlike printf(), it automatically adds a newline (\n) at the end of the string.
*/
