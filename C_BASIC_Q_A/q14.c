// Create a program to calculate the Perimeter of a rectangle.

// Formula: Perimeter = 2 * (Length + Width)
// (Or simply sum of all 4 sides: A + B + C + D)

#include <stdio.h> // Required for printf and scanf functions

int main()
{
      // Input length of rectangle
      float length;
      printf("\nEnter the length of the rectangle: ");
      scanf("%f", &length); // %f is used for float input

      // Input width of rectangle
      float width;
      printf("\nFinally, Enter the width of the rectangle: ");
      scanf("%f", &width);

      // Calculate perimeter
      float perimeter = 2 * (length + width);

      // Printing the perimeter
      // %.2f ensures result is shown up to 2 decimal places
      printf("\nPerimeter of rectangle is %.2f units.\n\n", perimeter);

      return 0; // End of program
}
