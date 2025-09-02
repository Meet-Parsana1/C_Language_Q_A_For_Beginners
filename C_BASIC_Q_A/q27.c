// Create a program to calculate the absolute value of a given integer using ternary operator.

// Absolute Value of a Number:-

// The absolute value of a number is its distance from zero on the number line, ignoring whether it is positive or negative.

// In other words, If the number is positive or zero, its absolute value is the same as the number. If the number is negative, its absolute value is the number without the minus sign.

#include <stdio.h>

int main()
{
      int n;
      printf("\nEnter a number: ");
      scanf("%d", &n);

      int result = n >= 0 ? n : -n;
      // The ternary operator in C is also called the conditional operator.Its symbol is ?: and it is the shortest way to write an if - else statement.

      // General Syntax :
      // condition ? expression_if_true : expression_if_false;

      printf("\nAbsolute value of %d is %d.\n\n", n, result);

      return 0;
}