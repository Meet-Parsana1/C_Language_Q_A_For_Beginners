// Pass a Car structure to a function that prints out a description of the car in one complete sentence.

#include <stdio.h>
#include <string.h> //Header file required for string hadling functions

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

struct Car
{
      char make[30];
      char model[30];
      int year;
      char color[30];
};

void printCarDescription(struct Car car)
{
      // What is a Function in C?
      // A function in C is a block of code that performs a specific task.
      // You write the code for a task once, and then you can reuse it whenever needed.
      // Functions help make programs modular, readable, and easier to debug.
      printf("\nThe car is a %d %s %s in %s colour.\n\n", car.year, car.make, car.model, car.color);
}

int main()
{
      struct Car myCar = {"Thar", "4x4", 2020, "Mate Black"};

      printCarDescription(myCar);

      return 0;
}