// Create a program to print the Fibonacci series up to a certain number.

// --> What is Fibonacci Series ?
// The Fibonacci series is a special sequence of numbers in mathematics where :

// The first two numbers are fixed : 0 and 1

// Every next number is obtained by adding the previous two numbers.

#include <stdio.h>

int main()
{
      // Inputting the terms from the user
      int terms;
      printf("\nEnter the terms upto which you want fibonacci series: ");
      scanf("%d", &terms);

      // Print the header
      printf("\nFibonacci Series upto %d: ", terms);

      // Print first two digits of the series and Check for invalid input
      if (terms > 0)
            printf("0 1");
      else if (terms == 0)
            printf(" 0");
      else
            printf("\nEnter a non-negative number.\n\n");

      int previous = 0, next = 1;

      // Generate the rest of the series until the next number exceeds 'terms'
      while (previous + next <= terms)
      {
            int sum = previous + next; // Calculate next Fibonacci number
            printf(" %d", sum);        // Print it
            previous = next;           // Shift values for next iteration
            next = sum;
      }

      return 0;
}