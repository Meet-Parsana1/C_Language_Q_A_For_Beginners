// Write a function that calculates the factorial of a given number.

#include <stdio.h>

// Function to calculate factorial
long long int factorial(int n)
{
      long long int fact = 1;

      if (n < 0)
      {
            // factorial for negative numbers is not defined
            return -1;
      }

      for (int i = 1; i <= n; i++)
      {
            fact = fact * i;
      }

      return fact;
}

int main()
{
      int n;
      printf("\nEnter the number of which you want to find factorial: ");
      scanf("%d", &n);

      long long int result = factorial(n); // function call

      if (result == -1)
      {
            printf("\nFactorial of negative numbers is not defined.\n\n");
      }
      else
      {
            printf("\nFactorial of %d is %lld.\n\n", n, result);
      }

      return 0;
}