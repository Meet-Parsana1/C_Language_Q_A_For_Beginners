// Create a program to sum all odd numbers from 1 to a specified number N.

#include <stdio.h>

int main()
{
      int n;
      // Asking user for input
      printf("\nEnter the number up to which you want to add odd numbers: ");
      scanf("%d", &n);

      int sum = 0; // variable to store the total sum

      // Loop from 1 to n
      for (int i = 1; i <= n; i++)
      {
            // If the number is even, skip this iteration
            if (i % 2 == 0)
            {
                  continue; // skips even numbers
            }
            else
            {
                  // If the number is odd, add it to sum
                  sum = sum + i;
            }
      }

      // Printing the final result
      printf("\nThe sum of all odd numbers from 1 to %d is %d.\n\n", n, sum);

      return 0;
}