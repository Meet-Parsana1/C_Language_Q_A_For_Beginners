// Create a program to reverse the digits of a number.

#include <stdio.h>

int main()
{
      // Input a number from the user
      int n;
      printf("\nEnter a positive integer number: ");
      scanf("%d", &n);

      int copy = n;    // Make a copy of the number (so we don’t lose the original value)
      int reverse = 0; // Variable to store the reversed number

      // Loop until copy becomes 0
      while (copy > 0)
      {
            int digit = copy % 10;            // Extract the last digit
            reverse = (reverse * 10) + digit; // Append digit to the reversed number
            copy = copy / 10;                 // Remove the last digit from the number
      }

      // Print the reversed number
      printf("\nThe reverse of %d is %d.\n\n", n, reverse);

      return 0;
}
