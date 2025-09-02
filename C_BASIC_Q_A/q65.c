// Write a C program that initializes an unsigned int to its maximum possible value and an int to a negative number.Add 1 to both, and print the results to show how the unsigned int wraps around to 0, whereas the int remains negative due to overflow.

#include <stdio.h>
#include <limits.h> // Header file for constants like UINT_MAX and INT_MAX

int main()
{
      // Initialize variables
      unsigned int a = UINT_MAX; // Maximum value of unsigned int (e.g., 4294967295 in 32-bit)
      int b = INT_MAX;           // Maximum value of signed int (e.g., 2147483647 in 32-bit)

      // Print initial values
      printf("\nThe value of a (unsigned int): %u.", a);
      printf("\nThe value of b (signed int): %d.\n\n", b);

      // Add 1 to both
      a++; // Wraps around to 0 because unsigned integers use modulo arithmetic
      b++; // Causes overflow (undefined behavior in C), usually flips to negative

      // Print values after increment
      printf("The value of a after adding 1 (unsigned int): %u.\n", a);
      printf("The value of b after adding 1 (signed int): %d.\n\n", b);

      return 0;
}

/*
✅ Explanation in simple words:

--> unsigned int behaves like a circular counter → when it reaches its max, adding 1 resets it to 0.

--> int has a limited range for positive/negative → adding 1 to INT_MAX causes overflow, which usually results in a negative number (though officially “undefined behavior” in C).
*/