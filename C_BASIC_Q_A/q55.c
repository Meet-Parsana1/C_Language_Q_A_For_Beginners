// Demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function.

#include <stdio.h>

// Function that increments its argument
void increment(int a)
{
      a++; // Increment local copy of variable
      printf("\nThe value of n after incrementing inside function is %d.\n", a);
}

int main()
{
      int n = 3; // Original variable

      // Call the function (only copy of n is passed)
      increment(n);

      // Original variable remains unchanged
      printf("\nThe value of n outside the function is %d.\n\n", n);

      return 0;
}

// Note:-
// When you pass a variable to a function, only a copy of the variable is passed.Changes inside the function do not affect the original variable.