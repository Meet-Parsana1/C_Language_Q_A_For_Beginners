// Create a program to find the sum and average of all elements in an array.

#include <stdio.h>

int main()
{
      // Initialize an array of 10 integers
      int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

      int sum = 0; // Variable to store the sum of array elements

      // Loop through the array to calculate the sum
      for (int i = 0; i <= 9; i++) // i runs from 0 to 9 (10 elements)
      {
            sum = sum + arr[i]; // Add each element to sum
      }

      // Calculate average as float (use 10.0 to avoid integer division)
      float average = sum / 10.0;

      // Print results
      printf("\nSum: %d", sum);
      printf("\nAverage: %.2f\n\n", average);

      return 0;
}
