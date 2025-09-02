// Create a program to reverse an array.

#include <stdio.h>

int main()
{
      // Initialize an array
      int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

      // Calculate the length of the array
      int length = sizeof(array) / sizeof(array[0]);
      // The sizeof() operator in C is used to determine the size(in bytes) of a data type or variable at compile time.It helps you find out how much memory a type or object occupies.
      // It is commonly used for: Allocating memory dynamically, Determining array lengths, Writing portable code across different systems.

      // Create a new array to store the reversed version
      int reversedArray[length];

      // Copy elements from the original array into reversedArray in reverse order
      for (int i = 0; i < length; i++)
      {
            reversedArray[i] = array[length - 1 - i];
      }

      // Print the original array
      printf("\nOriginal Array: ");
      for (int j = 0; j < length; j++)
      {
            printf("%d ", array[j]);
      }
      printf("\n");

      // Print the reversed array
      printf("\nReversed Array: ");
      for (int k = 0; k < length; k++)
      {
            printf("%d ", reversedArray[k]);
      }
      printf("\n\n");

      return 0;
}