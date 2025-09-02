// Create a program to declare two integer variables, assign them values, and display their values.

#include <stdio.h> // Standard Input Output library for printf function

int main()
{
      // Declaring and initializing two integer variables
      int a = 1; // variable 'a' is created and assigned the value 1
      int b = 2; // variable 'b' is created and assigned the value 2

      // Printing the values of the variables
      // %d is a format specifier for integers
      // The variables a and b replace %d in order
      printf("\nValue of a: %d.\nValue of b: %d.\n\n", a, b);

      // Returning 0 tells the operating system that the program executed successfully
      return 0;
}
