// Create a program to find number of occurrences of an element in an array.

#include <stdio.h>

void occurences(int arr[], int element)
{  
      int count = 0;

      int length = sizeof(arr) / sizeof(arr[0]);
      // The sizeof operator in C is used to determine the size(in bytes) of a data type or variable at compile time.It helps you find out how much memory a type or object occupies.
      // It is commonly used for: Allocating memory dynamically, Determining array lengths, Writing portable code across different systems.

      for (int i = 0; i <= length; i++)
      {
            if (arr[i] == element)
            {
                  count++;
            }
      }

      printf("\n%d occurs %d times in the given array.\n\n", element, count);
}

int main()
{
      int base[] = {1, 1, 1, 32, 3, 2, 3, 4, 5, 6, 7, 8, 8, 8, 4, 5, 9, 9, 9, 10, 11, 12};

      occurences(base, 3);

      return 0;
}