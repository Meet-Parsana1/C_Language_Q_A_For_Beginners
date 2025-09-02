// Use printf with format specifiers to format and print a date string(day, month, year).

#include <stdio.h>

int main()
{
      int day;
      printf("\nEnter today's date: ");
      scanf("%d", &day); // Read integer input for day

      char month[20];
      printf("\nNow, Enter the current month: ");
      scanf("%s", month); // Read string input for month

      int year;
      printf("\nFinally, Enter the current year: ");
      scanf("%d", &year); // Read integer input for year

      // Print formatted date using format specifiers
      printf("\nToday's Date is: %d %s, %d.\n\n", day, month, year);

      return 0;
}
