// Write a function that takes a string and reverses it in place.

#include <stdio.h>
#include <string.h> // Header file required for the string handling functions like strlen(), strcmp(), etc.

// Function to reverse a string in place
void reverseString(char *str)
{
      // Find the length of the string (excluding '\0')
      int length = strlen(str);

      // Swap characters from start and end moving towards the center
      for (int i = 0; i < length / 2; i++)
      {
            // Temporary variable to hold one character during swapping
            char temporary = str[i];

            // Swap character at i with character at (length - i - 1)
            str[i] = str[length - i - 1];
            str[length - i - 1] = temporary;
      }
}

int main()
{
      char str[100]; // Declare string of max size 100

      // Ask user to input a string
      printf("\nEnter a string: ");
      fgets(str, sizeof(str), stdin); // Use fgets to read safely (handles spaces too)

      // fgets() stores newline character '\n' when user presses ENTER,
      // so we remove it by replacing with '\0' (string terminator)
      if (str[strlen(str) - 1] == '\n')
      {
            str[strlen(str) - 1] = '\0';
      }

      // Create a pointer pointing to the string
      char *ptr = str;

      // Call the reverse function
      reverseString(ptr);

      // Extra check: if first character is newline, replace with string terminator
      if (str[0] == '\n')
      {
            str[0] = '\0';
      }

      // Print the reversed string
      printf("\nReversed string: %s.\n\n", str);

      return 0; // End of program
}

/*
LOGIC IN SIMPLE WORDS:-

1. Get the length of the string using strlen().

2. Swap the first character with the last, the second with the second-last, and so on until the middle is reached.
Example: "HELLO" → swap H with O → "OELLH" → swap E with L → "OLLEH".

3. Print the reversed string.

// Original:   A   B   C   D
//             |           |
// Swap ------>D   B   C   A<------ Swap
// Next:       D   B   C   A
//                 |   |
//            Swap C <-> B

// Result:     D   C   B   A
*/
