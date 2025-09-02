// Allocate memory for a struct representing a Point with x and y coordinates, set some values, and then properly deallocate the memory using free.

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

/*
--> What is a Structure in C?
      A structure in C is a user-defined data type that allows you to group different types of related data together under a single name. Think of it like a box that can hold multiple items of different types (like int, float, char, etc.) but all belonging to the same entity.

      SYNTAX:-

      struct StructureName
      {
            data_type member1;
            data_type member2;
            data_type member3;
            ...
      };
*/

// Step 1: Define a structure for coordinates
struct Coordinates
{
      float X;
      float Y;
};

int main()
{
      // Step 2: Allocate memory dynamically for one struct Coordinates
      struct Coordinates *Point = (struct Coordinates *)malloc(sizeof(struct Coordinates));
      // Alternative (initializes memory with 0s):
      // struct Coordinates *Point = (struct Coordinates *)calloc(1, sizeof(struct Coordinates));

      // Step 3: Check if memory allocation was successful
      if (Point == NULL)
      {
            printf("\nMemory Not Allocated!\n");
            return 1; // Exit the program if allocation fails
      }
      else
      {
            printf("\nMemory Allocated Successfully!\n");
      }

      // Step 4: Assign values to the structure members using pointer (-> operator)
      Point->X = 12.2;
      Point->Y = 13.3;

      // Step 5: Display the values
      printf("\nX-coordinate: %.2f\nY-coordinate: %.2f\n", Point->X, Point->Y);

      // Step 6: Free the dynamically allocated memory
      free(Point);
      printf("\nMemory Freed Successfully!\n\n");

      return 0; // End of program
}