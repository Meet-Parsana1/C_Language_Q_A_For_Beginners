// Create a program using continue to print only even numbers using continue for odd numbers.

#include <stdio.h>

int main()
{
      int n;

      // Ask the user for the limit
      printf("\nUpto which number you want to print even numbers: ");
      scanf("%d", &n);

      printf("\nEven numbers till %d: ", n);

      // Loop from 0 to n
      for (int i = 0; i <= n; i++)
      {
            // If the number is odd, skip this iteration
            if (i % 2 != 0)
                  continue;

            // If even, print the number
            printf(" %d", i);
      }

      return 0; // Program ends
}