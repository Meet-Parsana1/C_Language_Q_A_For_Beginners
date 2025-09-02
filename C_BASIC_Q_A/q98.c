// Create an array using calloc and fill it with random numbers, then use realloc to shrink the array size by half and print the remaining numbers.

/*
--> What is Dynamic Memory Allocation in C ?

      In C, Dynamic Memory Allocation (DMA) means allocating memory to variables at runtime (when the program is running) instead of at compile time.

      👉 Normally, when you declare variables like this:
      int arr[10];   // fixed memory for 10 integers

      The size is fixed and cannot change during execution.

      But what if you don’t know in advance how much memory you will need?
      This is where Dynamic Memory Allocation comes in.
      It allows you to request memory from the heap during program execution.

      --> calloc vs malloc:
            malloc(size)    → Allocates memory, but leaves it uninitialized (garbage values).
            calloc(n, size) → Allocates memory, initializes all bytes to 0.

*/
#include <stdio.h>
#include <stdlib.h> // Header File For malloc(), calloc(), realloc(), free()
#include <time.h>   // For seeding random numbers

int main()
{
      int elements = 6; // Initial size of the array

      // Step 1: Allocate memory using calloc
      int *ptr = (int *)calloc(elements, sizeof(int));

      if (ptr == NULL)
      {
            printf("\nMemory Allocation Failed.\n");
            return 1; // Exit if allocation fails
      }
      else
      {
            printf("\nMemory Allocated Successfully!\n");
      }

      // Step 2: Seed the random number generator
      srand(time(NULL));

      // Step 3: Fill the array with random numbers (0-99)
      for (int i = 0; i < elements; i++)
      {
            ptr[i] = rand() % 100;
      }

      // Step 4: Print the generated random numbers
      printf("\nGenerated Random Numbers: ");
      for (int j = 0; j < elements; j++)
      {
            printf("%d ", ptr[j]);
      }
      printf("\n");

      // Step 5: Shrink the array size by half using realloc
      int newSize = elements / 2;
      ptr = (int *)realloc(ptr, newSize * sizeof(int));

      if (ptr == NULL)
      {
            printf("\nMemory Reallocation Failed.\n");
            return 1;
      }
      else
      {
            printf("\nMemory Reallocated Successfully (Shrunk to half).\n");
      }

      // Step 6: Print the remaining numbers after shrinking
      printf("\nRemaining Numbers After Reallocation: ");
      for (int k = 0; k < newSize; k++)
      {
            printf("%d ", ptr[k]);
      }
      printf("\n");

      // Step 7: Free the allocated memory
      free(ptr);
      printf("\nMemory Deallocated Successfully!\n\n");

      return 0;
}