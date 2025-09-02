// Create a program that determines the greatest of the three numbers.

#include <stdio.h>

int main()
{
      int n1;
      printf("\nEnter the first number: ");
      scanf("%d", &n1); // Input first number

      int n2;
      printf("\nNow, Enter the second number: ");
      scanf("%d", &n2); // Input second number

      int n3;
      printf("\nFinally, Enter the third number: ");
      scanf("%d", &n3); // Input third number

      // Compare all three numbers using if-else
      if (n1 > n2 && n1 > n3) // Check if n1 is greater than both n2 and n3
      {
            printf("\n%d is the greatest.\n\n", n1);
      }
      else if (n2 > n1 && n2 > n3) // Otherwise, check if n2 is greater than both n1 and n3
      {
            printf("\n%d is the greatest.\n\n", n2);
      }
      else // If neither n1 nor n2 are the greatest, then n3 must be the greatest
      {
            printf("\n%d is the greatest.\n\n", n3);
      }

      return 0; // End of program
}
