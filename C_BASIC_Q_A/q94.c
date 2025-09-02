// Create a program that dynamically allocates memory for a Car structure and then free it at the end of the program.

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
#include <string.h> // Header file required for string hadling functions such as strcpy(), strlen(), etc.
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

// Define the Car structure
struct Car
{
      char make[30];   // Car brand name (e.g., Toyota, BMW)
      char model[30];  // Car model (e.g., Corolla, X5)
      int year;        // Manufacturing year
      char colour[30]; // Car colour (e.g., White, Black)
};

int main()
{
      // Dynamically allocate memory for one Car structure
      struct Car *myCar = (struct Car *)malloc(sizeof(struct Car));

      // Check if memory allocation was successful
      if (myCar == NULL)
      {
            printf("\nMemory allocation failed.\n\n");
            return 1; // Exit program if allocation fails
      }
      else
      {
            printf("\nMemory allocated successfully.\n");
      }

      // Assign values to the Car structure fields
      strcpy(myCar->make, "Toyota");
      strcpy(myCar->model, "Corolla");
      myCar->year = 2020;
      strcpy(myCar->colour, "White");

      // Display the stored Car details
      printf("\nCar Information:\n");
      printf("Make   : %s\n", myCar->make);
      printf("Model  : %s\n", myCar->model);
      printf("Year   : %d\n", myCar->year);
      printf("Colour : %s\n\n", myCar->colour);

      // Free the dynamically allocated memory
      free(myCar);
      printf("Memory freed successfully.\n\n");

      return 0; // Successful program execution
}