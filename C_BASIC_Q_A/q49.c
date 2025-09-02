// Write a program that continuously reads integers from the user and prints their squares.Use an infinite loop and a break statement to exit when a special number(e.g., -1) is entered.

#include <stdio.h>

int main()
{
      const int EXIT = -1; // Special number to stop the program

      while (1) // Infinite loop
      {
            int n;

            // Take input from the user
            printf("\nEnter a number: ");
            scanf("%d", &n);

            // If user enters -1, break out of the loop
            if (n == EXIT)
                  break;

            // Otherwise, print the square of the number
            printf("The square of %d is %d.\n\n", n, n * n);
      }

      // Program ends here
      return 0;
}