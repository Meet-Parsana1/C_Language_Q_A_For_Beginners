// Create a program to do sum and average of all elements in a 2D array.

#include <stdio.h>

int main()
{
      // Declare and initialize a 2x3 2D array
      int array[2][3] = {
            {1, 2, 3},
            {4, 5, 6}};

      int sum = 0; // Variable to store the sum of all elements

      // Traverse the 2D array using nested loops
      for (int i = 0; i < 2; i++) // Loop for rows
      {
            for (int j = 0; j < 3; j++) // Loop for columns
            {
                  sum = sum + array[i][j]; // Add each element to sum
            }
      }

      // Calculate average (6 elements total in 2x3 array)
      float average = sum / 6.0;

      // Print sum and average with proper formatting
      printf("\nSum: %d.\nAverage: %.2f\n\n", sum, average);

      return 0; // Exit program successfully
}
