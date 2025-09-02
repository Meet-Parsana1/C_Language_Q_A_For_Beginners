// Create a program to find the maximum and minimum element in an array.

#include <stdio.h>

int main()
{
      // Array with some positive and negative numbers
      int maxMin[] = {1, 2, 3, 45, 6, 3, 4, 5, 5, 5, 6, 6, 6666, 6, 12, -1, 23, 34, 56};

      // Initialize MIN and MAX with the first element
      int MIN = maxMin[0];
      int MAX = maxMin[0];

      // Calculate number of elements in the array
      int length = sizeof(maxMin) / sizeof(maxMin[0]);

      // Loop through the array
      for (int i = 0; i < length; i++) // FIXED: < instead of <=
      {
            if (maxMin[i] > MAX) // Check for maximum
            {
                  MAX = maxMin[i];
            }

            if (maxMin[i] < MIN) // Check for minimum
            {
                  MIN = maxMin[i];
            }
      }

      // Print results
      printf("\nMaximum Element: %d.\nMinimum Element: %d.\n\n", MAX, MIN);

      return 0;
}