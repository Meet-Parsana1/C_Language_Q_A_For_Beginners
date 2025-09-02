// Create a program using recursion to check if a number is a palindrome using recursion.

#include <stdio.h>

// Recursive function to reverse a number
int REVERSE(int number, int reverse);

int main()
{
      int n;
      printf("\nEnter a number: ");
      scanf("%d", &n);

      // Call the recursive function with initial reverse = 0
      int result = REVERSE(n, 0);

      // Check if the original number and reversed number are same
      if (result == n)
      {
            printf("\n%d is a Palindrome!\n\n", n);
      }
      else
      {
            printf("\n%d is not a Palindrome!\n\n", n);
      }

      return 0;
}

// Function to reverse a number using recursion
int REVERSE(int number, int reverse)
{
      // Base case: when number becomes 0, return the reversed number
      if (number == 0)
      {
            return reverse;
      }

      // Extract last digit
      int remainder = number % 10;

      // Remove last digit from number
      int new_number = number / 10;

      // Build reverse number
      int new_reverse = (reverse * 10) + remainder;

      // Recursive call
      return REVERSE(new_number, new_reverse);
}
