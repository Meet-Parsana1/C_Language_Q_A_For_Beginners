// Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.

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

struct Student
{
      int id;
      char name[30];
      int year;
      float gpa;
};

void modifyStudentGrade(struct Student *student, float newGpa)
{
      // What is a Function in C?
      // A function in C is a block of code that performs a specific task.
      // You write the code for a task once, and then you can reuse it whenever needed.
      // Functions help make programs modular, readable, and easier to debug.

      student->gpa = newGpa;
}

int main()
{
      struct Student S1 = {101, "Meet Parsana", 2, 3.5};

      modifyStudentGrade(&S1, 3.8);

      printf("\nUpdated GPA: %.2f\n\n", S1.gpa);

      return 0;
}