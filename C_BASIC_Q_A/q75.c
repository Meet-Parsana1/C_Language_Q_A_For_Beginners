// Create a program to search an element in a 2D array.

#include <stdio.h>

// Function to search an element in a 2x2 array
void search(int arr[2][2], int element)
{
      int found = 0;

      // Traverse through the 2D array
      for (int i = 0; i < 2; i++)
      {
            for (int j = 0; j < 2; j++)
            {
                  if (arr[i][j] == element)
                  {
                        printf("\nElement %d found firstly at index [%d][%d].\n\n", element, i, j);
                        found = 1;
                        goto end; // Exit both loops immediately
                  }
            }
      }

end: // Label used for goto
      if (found == 0)
      {
            printf("\nElement %d not found.\n\n", element);
      }
}

int main()
{
      int array[2][2] = {
          {1, 2},
          {3, 4}};

      int element;
      printf("\nEnter the element to search: ");
      scanf("%d", &element);

      // Call search function
      search(array, element);

      return 0;
}

// Other Things to Understand:-

// 1. What is Goto Statement in C ?
// The goto statement in C is a jump statement that allows the program control to move directly to another part of the program. It transfers the execution to a labeled statement in the same function.

// Syntax:-
// goto label; // jump statement
// ... label:  // target statement
//             // code here

// Key Points :
// goto can only jump within the same function.
//  It needs a label(a name followed by a colon:).
// It is often used to exit from deeply nested loops or handle errors.
// Overuse of goto makes the code hard to read → it’s usually avoided in modern programming.