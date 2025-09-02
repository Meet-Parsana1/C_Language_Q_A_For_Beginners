// Create a program that prompts the user to enter a positive number. Use a do-while loop to keep asking for the number until the user enters a valid positive number.
#include <stdio.h>

int main()
{
      int number;

      // Keep asking user until they enter a valid positive number
      do
      {
            printf("\nEnter a valid positive number: ");
            scanf("%d", &number);

            // Check if number is invalid (zero or negative)
            if (number <= 0)
            {
                  printf("\nInvalid Input!\n");
            }

      } while (number <= 0); // Repeat loop if number is not positive

      // Success message after user enters valid positive number
      printf("\nCongrats! You guessed the correct number.\n\n");

      return 0;
}
