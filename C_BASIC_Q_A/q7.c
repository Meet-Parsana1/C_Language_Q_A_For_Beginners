// Create a program to print the area of a square by inputting its side length.

#include <stdio.h> // Required for printf and scanf functions

int main()
{
      // Declaring a variable to store the side length of the square
      float side; // Using float to allow decimal input (e.g., 4.5)

      // Asking the user to enter the side length
      printf("\nEnter the side length of the square: ");
      // Reading user input and storing it in 'side'
      // %f is used for float input, and '&side' passes the address of the variable
      scanf("%f", &side);

      // Calculating the area of the square
      float Area = side * side; // Area formula: side * side

      // Printing the area
      // %.2f rounds the output to 2 decimal places
      printf("\nArea of Square: %.2fsq units\n\n", Area);

      return 0; // End of program
}
