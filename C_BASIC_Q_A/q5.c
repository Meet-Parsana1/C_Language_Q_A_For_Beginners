// Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.

#include <stdio.h> // Required library for printf function

int main()
{
      // Declaring variables of different fundamental data types
      int a = 1;           // Integer type variable (stores whole numbers)
      float b = 2.1;       // Float type variable (stores decimal numbers, single precision)
      double c = 3.123456; // Double type variable (stores decimal numbers, double precision, more accurate than float)
      char d = 'd';        // Character type variable (stores a single character)

      // Using sizeof() operator to find the size (in bytes) of each data type
      // The result depends on the system/architecture (commonly 4 bytes for int, 4 for float, 8 for double, 1 for char)

      printf("\nSize of integer: %zu\n", sizeof(a));     // %zu is used for size_t values
      printf("\nSize of float: %zu\n", sizeof(b));       // sizeof(b) returns how many bytes a float occupies
      printf("\nSize of double: %zu\n", sizeof(c));      // sizeof(c) returns the size of a double variable
      printf("\nSize of character: %zu\n\n", sizeof(d)); // sizeof(d) gives the size of a char (usually 1 byte)

      return 0; // End of program
}

/*
Why we used %zu for sizeof() ?
--------------------------------
- The sizeof operator always returns a value of type "size_t".
- size_t is an unsigned integer type defined in C, used to represent memory sizes.
- %zu is the correct format specifier for printing values of type size_t.
- Using %d (which is for int) may work on some systems, but it's not portable or safe, because size_t is not guaranteed to be the same as int across all systems.
*/
