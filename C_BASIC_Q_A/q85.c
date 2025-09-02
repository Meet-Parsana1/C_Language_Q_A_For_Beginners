// Create a program that checks if a given string is a palindrome(the same forwards and backwards) and outputs the result.

#include <stdio.h>
#include <string.h>

int main()
{
      char str[100]; // Declare a character array (string) of max size 100

      // Ask user for input
      printf("\nEnter a string: ");
      fgets(str, sizeof(str), stdin); // fgets is used to read input safely

      // fgets also stores '\n' (newline) when user presses Enter,
      // so we replace it with '\0' (end of string character)
      str[strlen(str) - 1] = '\0';

      int isPalindrome = 1; // Assume the string is a palindrome initially

      int length = strlen(str); // Find length of the string

      // Loop from start to the middle of the string
      for (int i = 0; i < length / 2; i++)
      {
            // Compare character from start (str[i]) with the one from end (str[length - i - 1])
            if (str[i] != str[length - i - 1])
            {
                  isPalindrome = 0; // Not a palindrome
                  break;            // No need to check further
            }
      }

      // Print result based on flag
      if (isPalindrome)
      {
            printf("\nEntered String is a palindrome.\n\n");
      }
      else
      {
            printf("\nEntered String is not a palindrome.\n\n");
      }

      return 0; // End of program
}

/*
LOGIC IN SIMPLE WORDS:

1. Input a string from the user.
2. Remove the newline character (\n) added by fgets.
3. Assume the string is a palindrome.
4. Compare the first character with the last, the second with the second-last, and so on until the middle.
      --> If all pairs match → string is a palindrome.
      --> If any pair does not match → not a palindrome.

5. Print the result.
*/