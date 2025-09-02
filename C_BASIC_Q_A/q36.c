// Create a program to find the Greatest Common Divisor(GCD) of two integers.

//🔹Definition of GCD:-

// GCD (Greatest Common Divisor) of two numbers is the largest positive integer
// that divides both numbers exactly (without leaving a remainder).
// It is also sometimes called HCF (Highest Common Factor).

#include <stdio.h>

int main()
{
      // Asking the user to input the first positive integer number
      int n1;
      printf("\nEnter first positive integer number: ");
      scanf("%d", &n1);

      // Asking the user to input the second positive integer number
      int n2;
      printf("\nFinally, Enter second positive integer number: ");
      scanf("%d", &n2);

      // Find the smaller number between n1 and n2,
      // because GCD can never be greater than the smaller number
      int MINIMUM = n1 < n2 ? n1 : n2;

      int GCD; // Variable to store the final GCD value

      // Loop starts from the minimum number and goes downwards
      // Why from MINIMUM? → Because the GCD cannot be greater than the smaller number
      for (int i = MINIMUM; i >= 1; i--)
      {
            // Check if 'i' divides both numbers completely (no remainder)
            if (n1 % i == 0 && n2 % i == 0)
            {
                  GCD = i; // If true, then 'i' is a common divisor
                  break;   // Stop loop at the first (largest) divisor found
            }
      }

      // Print the result
      printf("\nThe GCD of %d and %d is %d.\n\n", n1, n2, GCD);

      return 0;
}
