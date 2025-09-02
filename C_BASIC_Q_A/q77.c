// Create a program to find the sum of two diagonal elements.

#include <stdio.h>

int main()
{
      // NOTE: ROWS AND COLUMNS OF THE ARRAY MUST BE ODD AND EQUAL IN ORDER TO FIND THE SUM OF DIAGONAL ELEMENTS. 
      // Declare and initialize a 7x7 matrix
      int array[7][7] = {
            {1, 2, 3, 4, 5, 6, 7},
            {8, 9, 10, 11, 12, 13, 14},
            {15, 16, 17, 18, 19, 20, 21},
            {22, 23, 24, 25, 26, 27, 28},
            {29, 30, 31, 32, 33, 34, 35},
            {36, 37, 38, 39, 40, 41, 42},
            {43, 44, 45, 46, 47, 48, 49},
      };

      int sum = 0; // Variable to store sum of diagonal elements

      // Loop through each element of the 7x7 matrix
      for (int i = 0; i < 7; i++)
      {
            for (int j = 0; j < 7; j++)
            {
                  // Condition for main diagonal (i == j)
                  // OR secondary diagonal (i + j == 6)
                  if (i == j || i + j == 6)
                  {
                        sum = sum + array[i][j]; // Add diagonal element to sum
                  }
            }
      }

      // Print the sum of diagonal elements
      printf("\nSum of diagonal elements is %d.\n\n", sum);

      // Example elements included in sum:
      // Main diagonal: 1, 9, 17, 25, 33, 41, 49
      // Secondary diagonal: 7, 13, 19, 25, 31, 37, 43
      // Note: Middle element (25) is common to both, but added only once.

      return 0; // End of program
}