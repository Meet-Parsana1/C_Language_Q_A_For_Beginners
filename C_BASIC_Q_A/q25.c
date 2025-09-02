// Program to find the minimum of two numbers using the ternary operator

#include <stdio.h>

int main()
{
      int a, b;

      // Input first number
      printf("\nEnter the first number: ");
      scanf("%d", &a);

      // Input second number
      printf("Enter the second number: ");
      scanf("%d", &b);

      // Using ternary operator to find minimum
      int minimum = (a < b) ? a : b;

      // The ternary operator in C is also called the conditional operator.Its symbol is ?: and it is the shortest way to write an if - else statement.

      // General Syntax :
      // condition ? expression_if_true : expression_if_false;

      // Display result
      printf("\n%d is the minimum of the two.\n\n", minimum);

      return 0;
}
