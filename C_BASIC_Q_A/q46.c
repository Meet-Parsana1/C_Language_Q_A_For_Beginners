// Create a program using for to display if a number is prime or not.

#include <stdio.h> // Standard input-output library

int main()
{
      int number;

      // Asking the user to enter a number
      printf("\nEnter a positive number: ");
      scanf("%d", &number);

      // Step 1: Prime numbers are always greater than 1
      if (number <= 1)
      {
            printf("\n%d is not a prime number.\n\n", number);
            return 0; // Exit program if number is 0, 1, or negative
      }

      int isPrime = 1; // Assume the number is prime (1 = true, 0 = false)

      /*
      Step 2: Check divisibility using for loop
            - Prime numbers are divisible only by 1 and themselves.
            - So, we check if 'number' is divisible by any value of i from 2 up to number/2.
            - If we find any such divisor, then it's not prime.
      */
      for (int i = 2; i <= number / 2; i++)
      {
            if (number % i == 0) // If divisible by i, it's not prime
            {
                  isPrime = 0; // Mark as not prime
                  break;       // No need to check further, exit the loop
            }
      }

      // Step 3: Print result
      if (isPrime)
      {
            printf("\n%d is a prime number.\n\n", number);
      }
      else
      {
            printf("\n%d is not a prime number.\n\n", number);
      }

      return 0; // End of program
}