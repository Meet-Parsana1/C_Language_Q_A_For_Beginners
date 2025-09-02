// Initialize an array of Book structures with different data for each book using designated initializers.

#include <stdio.h>

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

// Defining a structure "Book" that groups related data:
// Title, Author, and Price of a book.
struct Book
{
      char Title[40];
      char Author[30];
      float Price;
};

int main()
{
      // Creating an array of 3 books called 'library2'
      // Each element of this array is a "struct Book"
      // and we are using *designated initializers* to assign values.

      struct Book library2[3] = {
          [0] = {"The Parable of the Pipeline", "John Doe", 299.89},         // Book 1
          [1] = {"The Art of Computer Programming", "Donald Knuth", 199.99}, // Book 2
          [2] = {"Clean Code", "Robert C. Martin", 249.99}                   // Book 3
      };

      // Printing the data to verify
      for (int i = 0; i < 3; i++)
      {
            printf("\nBook %d:\n", i + 1);
            printf(" Title : %s\n", library2[i].Title);
            printf(" Author: %s\n", library2[i].Author);
            printf(" Price : %.2f\n", library2[i].Price);
      }

      return 0;
}