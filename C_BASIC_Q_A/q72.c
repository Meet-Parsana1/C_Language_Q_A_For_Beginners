// Create a program to check is the array is palindrome or not.

#include <stdio.h>

int main()
{
      // Initialize the array
      int array[] = {1, 2, 1};

      // Find the length of the array
      int length = sizeof(array) / sizeof(array[0]);
      // The sizeof() operator in C is used to determine the size(in bytes) of a data type or variable at compile time.It helps you find out how much memory a type or object occupies.
      // It is commonly used for: Allocating memory dynamically, Determining array lengths, Writing portable code across different systems.

      // Assume the array is a palindrome initially
      int isPalindrome = 1;

      // Check elements from both ends towards the center
      for (int i = 0; i < length / 2; i++)
      {
            if (array[i] != array[length - 1 - i]) // Compare symmetric elements
            {
                  isPalindrome = 0; // If mismatch found, not a palindrome
                  break;            // Exit loop early
            }
      }

      // Print the result
      if (isPalindrome)
      {
            printf("\nThe given array is a \"Palindrome\".\n\n");
      }
      else
      {
            printf("\nThe given array is not a \"Palindrome\".\n\n");
      }

      return 0;
}