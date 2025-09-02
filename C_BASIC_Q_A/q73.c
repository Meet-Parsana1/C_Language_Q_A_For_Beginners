// Write a function that uses pointer arithmetic to copy an array of char into another.

#include <stdio.h>

// Function to copy characters from source[] to destination[]
void copyArray(char *source, char *destination, int size)
{
      for (int i = 0; i < size; i++)
      {
            // Copy each character using pointer arithmetic
            *(destination + i) = *(source + i);

            // Alternatively:
            // destination[i] = source[i];
      }

      // Add null terminator at the end to make it a valid C string
      *(destination + size) = '\0';

      // Print the copied array
      printf("\nCopied array: %s\n", destination);
      printf("\n");
}

int main()
{
      // Define and initialize the source array (string)
      char sourceArray[] = "Trillionaire";

      // Find the length (including '\0')
      int length = sizeof(sourceArray) / sizeof(sourceArray[0]);
      // The sizeof() operator in C is used to determine the size(in bytes) of a data type or variable at compile time.It helps you find out how much memory a type or object occupies.
      // It is commonly used for: Allocating memory dynamically, Determining array lengths, Writing portable code across different systems.

      // Create a destination array with the same size
      char destinationArray[length];

      // Print the original array
      printf("\nSource array: %s\n", sourceArray);

      // Call function to copy (exclude the null terminator from loop, so pass length-1)
      copyArray(sourceArray, destinationArray, length - 1);

      return 0;
}