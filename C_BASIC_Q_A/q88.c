// Create a program where you need to store and process data for a Book with attributes like title, author, and price, demonstrating why a structure is more suitable than separate variables.

#include <stdio.h>
#include <string.h> // Header file required for string handling functions such as strcpy(), strlen(), etc.

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

// Define a structure to represent a Book
struct Book
{
      char Title[30];  // Book title
      char Author[30]; // Book author
      float Price;     // Book price
};

int main()
{
      // -------------------------------
      // METHOD 1: USING A STRUCTURE
      // -------------------------------
      struct Book myBook; // Declare a variable of type 'struct Book'

      // The function strcpy() in C is used to copy one string into another.
      // It is available in the <string.h> library.
      // SYNTAX --> strcpy(destination, source);

      // Store values inside the structure fields
      strcpy(myBook.Title, "The Parable of the pipeline");
      strcpy(myBook.Author, "John Doe");
      myBook.Price = 299.89;

      // Print stored details
      printf("\nBook's Title: %s.\n", myBook.Title);
      printf("Book's Author: %s.\n", myBook.Author);
      printf("Book's Price: %.2f.\n\n", myBook.Price);

      // -------------------------------
      // METHOD 2: USING SEPARATE VARIABLES
      // -------------------------------
      /*
      char title[30];
      char author[30];
      float price;

      // Store values in separate variables
      strcpy(title, "The Parable of the pipeline");
      strcpy(author, "John Doe");
      price = 299.89;

      // Print details
      printf("Book's Title: %s.\n", title);
      printf("Book's Author: %s.\n", author);
      printf("Book's Price: %.2f.\n", price);
      */

      // -------------------------------
      // CONCLUSION:
      // -------------------------------
      // ✔ Using a structure is better because:
      //   1. Groups related data together in one unit (Title, Author, Price).
      //   2. Makes the code more organized and readable.
      //   3. Easier to manage multiple books (you can create an array of structs).
      //   4. Avoids confusion of handling many separate variables.
      // -------------------------------

      return 0;
}