// Program to check if a number is even or odd using the ternary operator

#include <stdio.h>

int main()
{
      int n;

      // Input a number
      printf("\nEnter a number: ");
      scanf("%d", &n);

      // Using ternary operator to decide and print directly
      (n % 2 == 0)
            ? printf("\n%d is an even number.\n\n", n)
            : printf("\n%d is an odd number.\n\n", n);

      // The ternary operator in C is also called the conditional operator.Its symbol is ?: and it is the shortest way to write an if - else statement.

      // General Syntax :
      // condition ? expression_if_true : expression_if_false;

      return 0;
}
