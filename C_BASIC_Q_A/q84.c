// Implement a trim function that removes leading and trailing spaces from a string.

#include <stdio.h>
#include <string.h>

// Function to trim spaces
void trim(char str[])
{
      int start = 0, end, i, j;

      // 1. Find index of first non-space character
      while (str[start] == ' ')
      {
            start++;
      }

      // 2. Find index of last non-space character
      end = strlen(str) - 1;
      // If the string is only spaces, for example: " ", then "end" will keep decreasing until it goes before index 0, which may lead to undefined behavior. So, we used (end > start) for prevention.
      while (end > start && str[end] == ' ')
      {
            end--;
      }

      // 3. Shift characters to the beginning of string
      // Copy from str[start] to str[end] into str[0...]
      for (i = start, j = 0; i <= end; i++, j++)
      {
            str[j] = str[i];
      }

      // 4. Null terminate the string to mark its end
      str[j] = '\0';
}

int main()
{
      char str[100];

      // Taking input string from user
      printf("\nEnter a string with leading and trailing spaces: ");
      fgets(str, sizeof(str), stdin);

      // Remove newline character('\n') from the end, which was added by fgets
      str[strlen(str) - 1] = '\0';

      // Call trim function
      trim(str);

      // Print trimmed string
      printf("\nTrimmed string: '%s'\n\n", str);

      return 0;
}