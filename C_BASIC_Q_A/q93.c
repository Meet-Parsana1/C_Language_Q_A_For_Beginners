// Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.

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

// Method 1 - For using nested structure.
struct Book
{
      char Title[30];
      char Author[30];
      float Price;
};

struct Student
{
      int id;
      char name[30];
      int year;
      float gpa;
      struct Book BorrowedBooks[3];
};

// Method 2 - For using nested structure.
// struct Student
// {
//       int id;
//       char name[30];
//       int year;
//       float gpa;
//       struct Book
//       {
//             char Title[30];
//             char Author[30];
//             float Price;
//       };
// };

void displayStudentInfo(struct Student S1)
{
      // What is a Function in C?
      // A function in C is a block of code that performs a specific task.
      // You write the code for a task once, and then you can reuse it whenever needed.
      // Functions help make programs modular, readable, and easier to debug.
      printf("\nID: %d.\n", S1.id);
      printf("Name: %s.\n", S1.name);
      printf("Year: %d.\n", S1.year);
      printf("GPA: %.2f\n\n", S1.gpa);

      for (int i = 0; i < 3; i++)
      {
            printf("Book %d Title: %s.\n", i + 1, S1.BorrowedBooks[i].Title);
            printf("Book %d Author: %s.\n", i + 1, S1.BorrowedBooks[i].Author);
            printf("Book %d Price: %.2f.\n", i + 1, S1.BorrowedBooks[i].Price);

            printf("\n");
      }
}

int main()
{
      struct Student S1 = {
            1, "Meet Parsana", 2, 8.5, {{"C Programming", "Dennis Ritchie", 299.99}, {"Data Structures", "Mark Allen Weiss", 399.99}, {"Algorithms", "Robert Sedgewick", 499.99}}};

      displayStudentInfo(S1);

      return 0;
}