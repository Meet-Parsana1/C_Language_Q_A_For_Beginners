/*
Print the following patterns using only one print statement.

Pattern 1: Right Half Triangle
*
**
***
****
*****

Pattern 2: Reverse Right Half Triangle
*****
****
***
**
*

Pattern 3: Left Half Pyramid
    *
   **
  ***
 ****
*****
*/

#include <stdio.h> // Standard input-output header file for using pre-defined functions of C.

int main()
{
      // Printing Right Half Triangle
      printf("\nRight Half Triangle:\n");
      // Here, we use a single printf statement to print all lines together.
      // The '\n' inside the string moves to the next line after each row.
      printf("*\n**\n***\n****\n*****");

      // Printing Reverse Right Half Triangle
      printf("\n\nReverse Right Half Triangle:\n");
      // Again, only one printf is used.
      // Each '\n' breaks the stars into the correct pattern shape.
      printf("*****\n****\n***\n**\n*");

      // Printing Left Half Pyramid
      printf("\n\nLeft Half Pyramid:\n");
      // Spaces before the stars push them to the right side, creating the pyramid shape.
      // Notice that the number of spaces decreases as the stars increase.
      printf("    *\n   **\n  ***\n ****\n*****");

      return 0; // This indicates successful program execution
}
