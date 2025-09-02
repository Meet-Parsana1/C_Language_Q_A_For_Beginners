// Write a program to change the value of an integer variable using a pointer and the *operator.

// What is pointer in C ?
// A pointer in C is a variable that stores the memory address of another variable.Instead of holding a direct value(like int a = 5;), a pointer holds the location in memory where that value is stored.

#include <stdio.h>

int main()
{
      // Declare and initialize an integer variable
      int a = 3;

      // Declare a pointer and store the address of variable 'a'
      int *b = &a;

      // Use the dereference operator (*) to change the value of 'a' through the pointer
      *b = 12;

      // Print the updated value of 'a' using pointer dereferencing
      printf("\nThe value of a is %d.\n\n", *b);

      return 0;
}