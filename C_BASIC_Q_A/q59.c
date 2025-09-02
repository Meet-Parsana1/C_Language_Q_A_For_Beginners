// Write a program that declares an integer variable and a pointer to it. Assign a value and print it using the pointer.

// What is pointer in C ?
// A pointer in C is a variable that stores the memory address of another variable.Instead of holding a direct value(like int a = 5;), a pointer holds the location in memory where that value is stored.

#include <stdio.h>

int main()
{
      // Declare an integer variable and assign value
      int n = 3;

      // Declare a pointer to int and store the address of 'n'
      int *ptr = &n;

      // Access and print the value of 'n' using the pointer
      // *(ptr) is called the dereference operator, it gives the value stored at that address which is passed inside () curly braces.
      printf("\nThe value of n is %d.\n\n", *(ptr));

      return 0;
}
