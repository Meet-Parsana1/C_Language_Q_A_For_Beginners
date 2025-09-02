// Create a program to input name of the person and respond with ”Welcome NAME to KG Coding”.

#include <stdio.h> // Standard input-output header file for using pre-defined functions of C.

int main()
{
      char name[30];
      printf("\nEnter your name: ");
      scanf("%29[^\n]", name);

      // Other way to take input
      // char name[30];
      // printf("\nEnter your name: ");
      // fgets(name, 30, stdin);

      printf("\nWelcome %s to KG Coding!\n\n", name);

      return 0;
}

// Explanation of line no. 9 (scanf("%29[^\n]", name);) -

// scanf is used to read formatted input from the user.
// "%29[^\n]s" is the format string:
// %29[^\n] is a scanset format specifier.
// %29 means read up to 29 characters (leaving space for the null terminator in the char name[30] array).
// [^\n] means "read any character except newline (\n)".
// So, it reads the input until the user presses Enter or 29 characters are read, whichever comes first.

// Explanation of line no.14(fgets(name, 30, stdin);) -

// fgets is a standard C library function used to read a string from an input stream.name is the character array where the input will be stored.30 is the maximum number of characters to read, including the null terminator(\0).So, at most 29 characters from the input will be stored, and the 30th character will be the null terminator.stdin is the standard input stream(usually the keyboard).


// fgets reads characters from the input until either : A newline character(\n) is encountered,The specified limi(here, 29 characters) is reached, Or end - of - file(EOF) occurs.The newline character, if read, is included in the string.The resulting string is always null - terminated.