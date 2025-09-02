// Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.

#include <stdio.h> // Required for printf function

int main()
{
      // Declaring variables to store user information

      // Array of characters to store first name (string in C)
      // The size [30] means it can store up to 29 characters + 1 for the null terminator '\0'
      char firstName[30] = "Meet";

      // Array of characters to store last name
      char lastName[30] = "Parsana";

      // Integer variable to store age
      int Age = 19;

      // Printing the stored information
      // %s is used to print strings (character arrays)
      // %d is used to print integers
      printf("\nFirst Name: %s\nLast Name: %s\nAge: %d\n\n", firstName, lastName, Age);

      return 0; // End of program
}
