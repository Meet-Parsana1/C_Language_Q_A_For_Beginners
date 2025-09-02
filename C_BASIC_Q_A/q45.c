// Create a program using for loop for printing multiplication table for a number.

#include <stdio.h>

int main()
{
      int n; // Variable to store the number entered by the user

      // Ask the user to input a number
      printf("\nEnter a number of which you want to print table: ");
      scanf("%d", &n);

      // Loop runs from 1 to 10 to print the multiplication table
      for (int i = 1; i <= 10; i++)
      {
            // Print the multiplication in the format: n X i = result
            printf("%d X %d = %d\n", n, i, n * i);
      }

      return 0; // End of program
}