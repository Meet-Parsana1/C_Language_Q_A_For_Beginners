// Create a program using recursion to display the Fibonacci series upto a certain number.

#include <stdio.h>

// Recursive function to calculate Fibonacci number
int fibonacci(int n)
{
      if (n == 0) // Base case 1: The 0th Fibonacci number is 0
      {
            return 0;
      }
      else if (n == 1) // Base case 2: The 1st Fibonacci number is 1
      {
            return 1;
      }
      else // Recursive case: Fn = F(n-1) + F(n-2)
      {
            return fibonacci(n - 1) + fibonacci(n - 2);
      }
}

int main()
{
      int terms;

      // Ask the user for number of terms
      printf("\nEnter a positive number: ");
      scanf("%d", &terms);

      // Print Fibonacci series
      printf("\nFibonacci series upto %d terms: ", terms);

      for (int i = 0; i < terms; i++)
      {
            // Print each Fibonacci number using recursive function
            printf("%d ", fibonacci(i));
      }

      printf("\n\n"); // Print a new line after the series

      return 0; // End of program
}