// Create a program to calculate product of two floating-point numbers.

#include <stdio.h> // Required for printf

int main()
{
      // Declaring and initializing two floating-point numbers
      float a = 12.2;
      float b = 12.3;

      // Calculating the product of the two numbers
      float product = a * b;

      // Printing the result
      // %.2f ensures that output is shown with 2 decimal places
      printf("\nThe product of %.2f and %.2f is %.2f\n\n", a, b, product);

      return 0; // End of program
}
