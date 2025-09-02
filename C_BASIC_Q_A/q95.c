// Create a program that uses malloc to dynamically allocate an array for a specified number of float values entered by the user and then stores user-entered numbers into it.

/*
--> What is Dynamic Memory Allocation in C ?

      In C, Dynamic Memory Allocation (DMA) means allocating memory to variables at runtime (when the program is running) instead of at compile time.

      👉 Normally, when you declare variables like this:
      int arr[10];   // fixed memory for 10 integers

      The size is fixed and cannot change during execution.

      But what if you don’t know in advance how much memory you will need?
      This is where Dynamic Memory Allocation comes in.
      It allows you to request memory from the heap during program execution.
*/

#include <stdio.h>
#include <stdlib.h> // Header file required for dynamic memory allocation by using malloc(), calloc(), etc.

int main()
{
      int n; // Variable to store number of elements user wants to enter

      // Step 1: Ask user how many elements they want to store
      printf("\nHow many elements you want to enter: ");
      scanf("%d", &n);

      // Step 2: Allocate memory dynamically for n float values
      float *arr = (float *)malloc(n * sizeof(float));

      // Step 3: Check if malloc() successfully allocated memory
      if (arr == NULL)
      {
            printf("\nMemory allocation failed!\n");
            return 1; // Exit program with error code
      }
      else
      {
            printf("\nMemory Allocated Successfully.\n\n");
      }

      // Step 4: Take input values from user
      for (int i = 0; i < n; i++)
      {
            printf("Enter element %d: ", i + 1);
            scanf("%f", &arr[i]); // Store values in allocated memory
      }

      // Step 5: Print the values back to user
      printf("\nEntered numbers are: ");
      for (int i = 0; i < n; i++)
      {
            printf("%.2f  ", arr[i]); // Print values with 2 decimal precision
      }
      printf("\n");

      // Step 6: Free the allocated memory to prevent memory leaks
      free(arr);
      printf("\nMemory Freed Successfully.\n\n");

      return 0; // Successful program execution
}