// Write a function that adds that takes 4 int parameters and returns the sum.

#include <stdio.h>

// Function declaration (prototype)
int SUM(int, int, int, int);

int main()
{
      // Call the function with 4 integers
      int answer = SUM(1, 2, 3, 4);

      // Print the result
      printf("\nThe sum is %d.\n\n", answer);

      return 0;
}

// Function definition
// This function takes 4 integers as input and returns their sum
int SUM(int a, int b, int c, int d)
{
      int result = a + b + c + d;
      return result;
}