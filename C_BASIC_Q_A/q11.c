// Create a program that takes two numbers and shows result of all arithmetic operators (+, -, *, /, %).

#include <stdio.h> // Required for printf and scanf functions

int main()
{
      int a; // First number
      printf("\n\nEnter the first number: ");
      scanf("%d", &a); // Read integer input from user

      int b; // Second number
      printf("\nFinally, Enter the second number: ");
      scanf("%d", &b); // Read integer input from user

      // Performing arithmetic operations
      int sum = a + b;         // Addition
      int subtraction = a - b; // Subtraction
      int multiply = a * b;    // Multiplication

      // For division, we use float to avoid losing decimal values
      float division = (float)a / b;

      // Modulus gives the remainder (only works with integers)
      int modulus = a % b;

      // Printing results
      // %d is used for integers, %.2f is used for float (2 decimal places)
      printf("\nThe sum of %d and %d is %d\n", a, b, sum);
      printf("\nThe subtraction of %d and %d is %d\n", a, b, subtraction);
      printf("\nThe product of %d and %d is %d\n", a, b, multiply);
      printf("\nThe division of %d and %d is %.2f\n", a, b, division);
      printf("\nThe modulus of %d and %d is %d\n\n", a, b, modulus);

      return 0; // End of program
}
