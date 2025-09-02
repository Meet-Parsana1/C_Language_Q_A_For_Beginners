// Develop a program that calculates the sum of all numbers entered by a user until the user enters 0. The total sum should then be displayed.

#include <stdio.h>

int main()
{
      int number, sum = 0; // Declare variables: 'number' for input, 'sum' to store total

      // Keep asking the user for numbers until they enter 0
      do
      {
            printf("\nEnter a number: ");
            scanf("%d", &number); // Take user input

            sum = sum + number; // Add the entered number to sum

      } while (number != 0); // Repeat until user enters 0

      // Print the final sum (0 is not included in the sum)
      printf("\nThe sum of all numbers entered by you is %d.\n\n", sum);

      return 0; // End of program
}