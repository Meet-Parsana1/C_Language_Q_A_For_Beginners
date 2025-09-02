// Create a program to merge two sorted arrays.

#include <stdio.h>

int main()
{
      // Two already sorted arrays
      int array1[] = {0, 2, 4, 6, 8, 10, 12};
      int array2[] = {1, 3, 5, 7, 9, 11, 13};

      // Finding the sizes of the arrays
      int size1 = sizeof(array1) / sizeof(array1[0]); // Size of array1
      int size2 = sizeof(array2) / sizeof(array2[0]); // Size of array2
      int size3 = size1 + size2;                      // Total size after merging

      int merged[size3]; // New array to store merged elements

      int i = 0, j = 0, k = 0; // i for array1, j for array2, k for merged array

      // Merge both arrays while both still have elements
      while (i < size1 && j < size2)
      {
            if (array1[i] < array2[j]) // If current element in array1 is smaller
            {
                  merged[k++] = array1[i++]; // Put it in merged array and move i
            }
            else // Otherwise, element in array2 is smaller (or equal)
            {
                  merged[k++] = array2[j++]; // Put it in merged array and move j
            }
      }

      // If elements are still left in array1, copy them
      while (i < size1)
      {
            merged[k++] = array1[i++];
      }

      // If elements are still left in array2, copy them
      while (j < size2)
      {
            merged[k++] = array2[j++];
      }

      // Print the merged sorted array
      printf("\nMerged sorted array: ");
      for (int l = 0; l < size3; l++)
      {
            printf("%d ", merged[l]);
      }

      printf("\n\n"); // New line for better output formatting

      return 0; // End of program
}