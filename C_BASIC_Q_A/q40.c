// Create a program to check if a number is an Armstrong number.

// What is an Armstrong number ?

// An Armstrong number(also called a narcissistic number or pluperfect digital invariant(PPDI)) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

// Example:-

// 153 → 3 digits

// 153 = 1 to the power 3 + 5 to the power 3 + 3 to the power 3
// ✅ So, 153 is an Armstrong number.

// 9474 → 4 digits

// 9474 = 9 to the power 4 + 4 to the power 4 + 7 to the power 4 + 4 to the power 4

// ✅ 9474 is also an Armstrong number.

#include <stdio.h>

int main()
{
      int n;
      printf("\nEnter a positive integer number: ");
      scanf("%d", &n);

      int copy = n; // Make a copy of n to manipulate digits without changing original
      int sum = 0;  // This will store the sum of digits raised to the power of 'number of digits'

      int power = 0; // To count the number of digits in the number

      // First loop: calculate the number of digits
      while (copy > 0)
      {
            copy = copy / 10; // Remove last digit
            power++;          // Increment digit count
      }

      copy = n; // Reset copy to original number for next calculation

      // Second loop: calculate sum of digits each raised to the power 'power'
      while (copy > 0)
      {
            int digit = copy % 10; // Extract last digit
            int number = 1;        // Will store digit^power

            // Multiply digit 'power' times
            for (int i = 1; i <= power; i++)
            {
                  number = number * digit;
            }

            sum = sum + number; // Add to sum
            copy = copy / 10;   // Remove last digit
      }

      // Check if the sum equals the original number
      if (sum == n)
      {
            printf("\n%d is an Armstrong number.\n\n", n);
      }
      else
      {
            printf("\n%d is not an Armstrong number.\n\n", n);
      }

      return 0;
}
