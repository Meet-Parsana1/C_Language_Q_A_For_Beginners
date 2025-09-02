// Create a program using continue to sum all positive numbers entered by the user; skip any negative numbers.

#include <stdio.h>

int main()
{
      int numbers; // Total count of numbers the user wants to enter

      // Ask user for how many numbers they want to input
      printf("\nHow many numbers you want to enter: ");
      scanf("%d", &numbers);

      int number[numbers], sum = 0; // Array to hold numbers, sum to store total of positives

      // Loop through each number entered
      for (int i = 1; i <= numbers; i++)
      {
            printf("Enter number %d: ", i);
            scanf("%d", &number[i]);

            // If the entered number is negative, skip the rest of this loop iteration
            if (number[i] < 0)
            {
                  continue;
            }

            // If positive, add to the sum
            sum = sum + number[i];
      }

      // Print the total sum of only positive numbers
      printf("\nThe sum of all positive numbers entered by you is %d.\n\n", sum);

      return 0; // Program ends
}