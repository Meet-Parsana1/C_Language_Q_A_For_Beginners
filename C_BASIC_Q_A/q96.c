// Use calloc to allocate an array for a set of char characters representing a sentence, ensuring all the memory is initialized to zero.

/*
--> What is Dynamic Memory Allocation in C ?

      In C, Dynamic Memory Allocation (DMA) means allocating memory to variables at runtime (when the program is running) instead of at compile time.

      👉 Normally, when you declare variables like this:
      int arr[10];   // fixed memory for 10 integers

      The size is fixed and cannot change during execution.

      But what if you don’t know in advance how much memory you will need?
      This is where Dynamic Memory Allocation comes in.
      It allows you to request memory from the heap during program execution.

      ---------------------------------------------------
      Difference between malloc() and calloc():
            - malloc(): Allocates memory but leaves it uninitialized (garbage values).
            - calloc(): Allocates memory AND initializes all bytes to 0.
      ---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h> // Header file required for dynamic memory allocation by using malloc(), calloc(), etc.

int main()
{
      // Step 1: Allocate memory for 100 characters using calloc()
      // calloc initializes all memory blocks to 0 by default
      char *ptr = (char *)calloc(100, sizeof(char));

      // Step 2: Check if memory allocation was successful
      if (ptr == NULL)
      {
            printf("\nMemory Not Allocated Successfully!\n");
            return 1; // Exit the program if allocation failed
      }
      else
      {
            printf("\nMemory Allocated Successfully!\n");
      }

      // Step 3: Show default initialization by calloc (all values should be 0)
      printf("\nDefault Memory Initialization (first 20 values shown):\n");
      for (int i = 0; i < 20; i++) // printing only first 20 for clarity
      {
            printf("%d ", ptr[i]); // will print 0s
      }
      printf("...\n");

      // Step 4: Take a string input from the user
      printf("\nEnter a sentence (less than 100 characters): ");
      scanf(" %99[^\n]", ptr); // %99[^\n] prevents overflow & reads spaces

      // Step 5: Print the entered string
      printf("\nEntered Sentence: %s.\n", ptr);

      // Step 6: Free the allocated memory
      free(ptr);
      printf("\nMemory Freed Successfully.\n\n");

      return 0; // Successful program execution
}