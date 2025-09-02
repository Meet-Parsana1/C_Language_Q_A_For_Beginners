// Create a program to verify if a number is a palindrome.

// What is a Palindrome number ?

// A palindrome number is a number that remains the same when its digits are reversed.
// In simple words : If you read the number forward or backward, it is identical.

// Example,
// 121 → Reversed : 121 ✅ Palindrome
// 12321 → Reversed : 12321 ✅ Palindrome

#include <stdio.h>

int main()
{
      int n;
      printf("\nEnter a positive integer number: ");
      scanf("%d", &n);

      int copy = n;    // Make a copy of the original number to manipulate
      int reverse = 0; // This will store the reversed number

      // Loop to reverse the number
      while (copy > 0)
      {
            int digit = copy % 10;            // Extract last digit
            reverse = (reverse * 10) + digit; // Append digit to reversed number
            copy = copy / 10;                 // Remove last digit from copy
      }

      // Compare reversed number with original number
      if (reverse == n)
      {
            printf("\n%d is a Palindrome.\n\n", n); // Same forwards and backwards
      }
      else
      {
            printf("\n%d is not a Palindrome.\n\n", n); // Different forwards and backwards
      }

      return 0;
}
