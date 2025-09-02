// Create a program to calculate the Area of a Triangle.
// Formula: Area = 1/2 * Base * Height

#include <stdio.h> // Required for printf and scanf functions

int main()
{
      // Input base of the triangle
      float base;
      printf("\nEnter the base of the triangle: ");
      scanf("%f", &base); // Read base as float

      // Input height of the triangle
      float height;
      printf("\nFinally, Enter the height of the triangle: ");
      scanf("%f", &height); // Read height as float

      // Calculate area using formula
      float area = 0.5 * base * height;

      // Print result
      // %.2f is used to round output to 2 decimal places
      printf("\nThe area of the triangle is %.2f sq units.\n\n", area);

      return 0; // End of program
}
