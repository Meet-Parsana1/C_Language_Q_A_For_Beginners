// Develop a program that prints the multiplication table for a given number.

#include <stdio.h>

int main()
{
      int n;

      // Taking user input
      printf("\nEnter the number of which you want to print the table: ");
      scanf("%d", &n);

      // Loop runs from 1 to 10
      for (int i = 1; i <= 10; i++)
      {
            // Printing in the format: n X i = result
            printf("%d X %d = %d\n", n, i, n * i);
      }

      return 0;
}
