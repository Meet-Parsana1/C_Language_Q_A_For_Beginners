// Write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.

#include <stdio.h>

// Function declarations
void FACTORIAL(); // Uses long long
void factorial(); // Uses long

int main()
{
      // Call both functions to compare results
      FACTORIAL();
      factorial();

      return 0;
}

// Function to calculate factorial of 20 using long long
void FACTORIAL()
{
      long long RESULT = 1; // long long can hold very large values

      // Multiply numbers from 1 to 20
      for (int i = 1; i <= 20; i++)
      {
            RESULT = RESULT * i;
      }

      // Print result → correct value because long long can store 20!
      printf("\nFactorial of 20 by long long is %lld.\n\n", RESULT);
}

// Function to calculate factorial of 20 using long
void factorial()
{
      long result = 1; // long has a smaller range than long long

      // Multiply numbers from 1 to 20
      for (int j = 1; j <= 20; j++)
      {
            result = result * j;
      }

      // Print result → incorrect due to overflow (exceeds range of long)
      printf("Factorial of 20 by long is %ld.\n\n", result);
}