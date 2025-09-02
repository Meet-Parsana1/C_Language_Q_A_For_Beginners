/*
Show the following patterns just using print statements:

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
      // Each printf prints one line of the triangle
      printf("*\n");     // 1 star
      printf("**\n");    // 2 stars
      printf("***\n");   // 3 stars
      printf("****\n");  // 4 stars
      printf("*****\n"); // 5 stars

      // Printing Reverse Right Half Triangle
      printf("\nReverse Right Half Triangle:\n");
      // We start with 5 stars and reduce 1 star per line
      printf("*****\n"); // 5 stars
      printf("****\n");  // 4 stars
      printf("***\n");   // 3 stars
      printf("**\n");    // 2 stars
      printf("*\n");     // 1 star

      // Printing Left Half Pyramid
      printf("\nLeft Half Pyramid:\n");
      // Here spaces are printed before stars to shift stars to the right
      printf("     *\n"); // 5 spaces, then 1 star
      printf("    **\n"); // 4 spaces, then 2 stars
      printf("   ***\n"); // 3 spaces, then 3 stars
      printf("  ****\n"); // 2 spaces, then 4 stars
      printf(" *****\n"); // 1 space, then 5 stars

      return 0; // Successful program termination
}
