// Create a program that determines if a given year is a leap year

// Conditions to check:
// 1. A year is a leap year if it is divisible by 400.
// 2. Or, it is divisible by 4 but not divisible by 100.

#include <stdio.h>

int main()
{
      int year;
      printf("\nEnter the year: "); // Input year from user
      scanf("%d", &year);

      // Check leap year conditions
      if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
      {
            printf("\n%d is a leap year.\n\n", year);
      }
      else
      {
            printf("\n%d is not a leap year.\n\n", year);
      }

      return 0;
}
