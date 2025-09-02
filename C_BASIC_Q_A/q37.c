// Program to check whether a given number is prime using while loop

#include <stdio.h> // Standard input-output library

int main()
{
      int number;

      // Asking user to enter a number
      printf("\nEnter a positive number: ");
      scanf("%d", &number);

      // Step 1: Prime numbers are greater than 1
      if (number <= 1)
      {
            printf("\n%d is not a prime number.\n\n", number);
            return 0; // Exit the program here if number is 0, 1, or negative
      }

      int isPrime = 1; // Assume number is prime initially (1 = true, 0 = false)
      int i = 2;       // Start checking divisibility from 2

      /*
      Step 2: Check divisibility
            - A number is prime if it is NOT divisible by any number between 2 and sqrt(number).
            - Instead of going till number/2 or number, we only check till i*i <= number because if a number has a factor greater than sqrt(number), the smaller factor would have already been found.
      */
      while (i * i <= number)// alternatively, you can use this condition while(i <= number / 2)
      {
            // If number is divisible by i, then it is NOT prime
            if (number % i == 0)
            {
                  isPrime = 0; // Mark as not prime
                  break;       // No need to check further
            }
            i++; // Move to next number
      }

      // Step 3: Print result based on isPrime flag
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