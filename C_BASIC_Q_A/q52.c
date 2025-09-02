// Define a function square that takes an int and returns its square.

#include <stdio.h>

// Function definition: takes an int and returns its square
int square(int number)
{
      return number * number;
}

int main()
{
      int n;

      // Ask user for a number
      printf("\nEnter the number of which you want to find square: ");
      scanf("%d", &n);

      // Call the function and store result
      int result = square(n);

      // Display the result
      printf("\nThe square of %d is %d.\n\n", n, result);

      return 0;
}