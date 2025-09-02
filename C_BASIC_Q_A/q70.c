// Create a program to return a new array after deleting a specific element.

#include <stdio.h>

// Function to delete all occurrences of an element
void deleteElement(int arr[], int size, int element)
{
      int newArray[size]; // Allocate same size (worst case: element not found)
      int index = 0;      // Index for newArray

      // Copy elements except the one(s) to be deleted
      for (int i = 0; i < size; i++)
      {
            if (arr[i] != element)
            {
                  newArray[index] = arr[i];
                  index++;
            }
      }

      // If no element was deleted
      if (index == size)
      {
            printf("\nElement %d not found in the array.\n\n", element);
            return;
      }

      // Print new array
      printf("\nNew array after deleting %d is: ", element);
      for (int j = 0; j < index; j++)
      {
            printf("%d ", newArray[j]);
      }
      printf("\n\n");
}

int main()
{
      int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 5, 10}; // Notice 5 appears twice

      int length = sizeof(array) / sizeof(array[0]);
      // The sizeof operator in C is used to determine the size(in bytes) of a data type or variable at compile time.It helps you find out how much memory a type or object occupies.
      // It is commonly used for: Allocating memory dynamically, Determining array lengths, Writing portable code across different systems.

      deleteElement(array, length, 5);

      return 0;
}