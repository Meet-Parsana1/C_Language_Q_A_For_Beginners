// Create a program that prints Right-half pyramid, Reverse Right-half pyramid and Left Half pyramid.

#include <stdio.h>

int main()
{
      int rows;
      printf("\nEnter the number of rows: ");
      scanf("%d", &rows); // User inputs the number of rows for the pyramids

      // ===========================
      // RIGHT-HALF PYRAMID
      // ===========================
      printf("\nRIGHT-HALF PYRAMID:\n");

      for (int i = 1; i <= rows; i++) // Outer loop for each row
      {
            for (int j = 1; j <= i; j++) // Inner loop to print stars in each row
            {
                  printf(" *"); // Print a star with a space
            }
            printf("\n"); // Move to the next line after each row
      }

      // ===========================
      // REVERSE RIGHT-HALF PYRAMID
      // ===========================
      printf("\nREVERSE RIGHT-HALF PYRAMID:\n");

      for (int i = 1; i <= rows; i++) // Outer loop for each row
      {
            for (int j = rows; j >= i; j--) // Inner loop decreases stars each row
            {
                  printf(" *"); // Print a star with a space
            }
            printf("\n"); // Move to the next line
      }

      // ===========================
      // LEFT-HALF PYRAMID
      // ===========================
      printf("\nLEFT-HALF PYRAMID:\n");

      for (int i = 1; i <= rows; i++) // Outer loop for each row
      {
            // Print spaces to shift stars to the right
            for (int j = rows - 1; j >= i; j--)
            {
                  printf("  "); // Two spaces to align stars properly
            }

            // Print stars for the current row
            for (int k = 1; k <= i; k++)
            {
                  printf(" *"); // Print star with a space
            }

            printf("\n"); // Move to the next line
      }

      return 0;
}
