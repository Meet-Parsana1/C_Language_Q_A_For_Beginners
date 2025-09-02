// Create a program to check if the given array is sorted.

#include <stdio.h>

// Function to check if array is sorted
int isSorted(int arr[], int size)
{
      int isIncreasing = 1; // Assume increasing unless proven otherwise
      int isDecreasing = 1; // Assume decreasing unless proven otherwise

      // Loop through array
      for (int i = 1; i < size; i++)
      {
            if (arr[i] < arr[i - 1]) // If any element smaller → not increasing
            {
                  isIncreasing = 0;
            }

            if (arr[i] > arr[i - 1]) // If any element bigger → not decreasing
            {
                  isDecreasing = 0;
            }
      }

      // If either condition still true, array is sorted
      if (isIncreasing || isDecreasing)
      {
            return 1; // Sorted
      }
      else
      {
            return 0; // Not sorted
      }
}

int main()
{
      // TRY DIFFERENT ARRAYS TO TEST 
      int array[] = {1, 1, 1, 1, 1, 1, 1, 1}; // All equal → sorted

      int length = sizeof(array) / sizeof(array[0]);
      // The sizeof operator in C is used to determine the size(in bytes) of a data type or variable at compile time.It helps you find out how much memory a type or object occupies.
      // It is commonly used for: Allocating memory dynamically, Determining array lengths, Writing portable code across different systems.

      if (isSorted(array, length) == 1)
      {
            printf("\nThe given array is \"sorted\".\n\n");
      }
      else
      {
            printf("\nThe given array is \"not sorted\".\n\n");
      }

      return 0;
}