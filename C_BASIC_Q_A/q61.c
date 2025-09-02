// Declare a pointer to a char and use it to read and print a character entered by the user.

// What is pointer in C ?
// A pointer in C is a variable that stores the memory address of another variable.Instead of holding a direct value(like int a = 5;), a pointer holds the location in memory where that value is stored.

#include <stdio.h>

int main()
{
      char c; // Declare a character variable

      char *ptr = &c; // Declare a pointer 'ptr' that stores the address of variable 'c'

      printf("\nEnter a character: ");
      scanf(" %c", ptr); // Take character input directly into memory location of 'c' using pointer

      // Print the character stored in 'c'. It can also be accessed as *ptr
      printf("\nEntered character is \"%c\".\n\n", c);

      return 0;
}