// Create a program that determines if a number is odd or even.

#include <stdio.h>

int main()
{
      int n; // variable to store the number

      // Ask the user for a number
      printf("\nEnter a number: ");
      scanf("%d", &n);

      // Check if the number is divisible by 2
      if (n % 2 == 0) // If remainder is 0, it's even
      {
            printf("\n%d is an even number.\n\n", n);
      }
      else // Otherwise, it's odd
      {
            printf("\n%d is an odd number.\n\n", n);
      }

      return 0; // End of program
}
