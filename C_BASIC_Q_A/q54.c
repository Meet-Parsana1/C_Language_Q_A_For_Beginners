// Create a function max that takes two float arguments and returns the larger value.

// What is ternary operator in C ?

// The ternary operator in C is also called the conditional operator.Its symbol is ?: and it is the shortest way to write an if - else statement.

// General Syntax:-

// condition ? expression_if_true : expression_if_false;

// If condition is true(non - zero) → expression_if_true is executed. If condition is false(0) → expression_if_false is executed.

#include <stdio.h>

// Function to return the larger of two floats
float max(float a, float b)
{
      // Ternary operator checks the condition
      // If a > b → return a, else return b
      return a > b ? a : b;
}

int main()
{
      float n1, n2;

      // Input first number
      printf("\nEnter the first floating-point number: ");
      scanf("%f", &n1);

      // Input second number
      printf("\nEnter the second floating-point number: ");
      scanf("%f", &n2);

      // Call function to find maximum
      float result = max(n1, n2);

      // Print result with 2 decimal places
      printf("\n%.2f is the greatest of the two.\n\n", result);

      return 0;
}