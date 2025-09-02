// Create a program to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition, subtraction, multiplication, and division.

// Switch - Case Statement in C

// The switch - case statement is a multi - way decision - making statement in C.It allows you to execute one block of code among many options based on the value of a variable or expression.

// It is similar to if - else if - else, but often cleaner when you have many discrete values to check.

// Syntax:-

// switch (expression)
// {
// case value1:
//       // code to execute if expression == value1
//       break;
// case value2:
//       // code to execute if expression == value2
//       break;
//       ... default:
//       // code to execute if expression doesn't match any case
// }

// expression → an integer, char, or enum(not float / double).

// case value: → each possible value to match.

// break; → exits the switch after executing a case; without it, execution falls through to the next case.

// default: → optional; executed if no case matches.

#include <stdio.h>

int main()
{
      int n1, n2;
      char Operator;
      float result;

      // Input first number
      printf("\nEnter the first integer number: ");
      scanf("%d", &n1);

      // Input second number
      printf("\nFinally, Enter the second integer number: ");
      scanf("%d", &n2);

      // Input operator
      // Note: space before %c in scanf(" %c", &Operator) to consume any leftover newline
      printf("\nNow, Enter the operator (+, -, *, /): ");
      scanf(" %c", &Operator);

      // Switch-case to perform operation based on operator
      switch (Operator)
      {
      case '+':
            result = n1 + n2; // Addition
            printf("\nThe sum of %d and %d is %.2f\n\n", n1, n2, result);
            break;
      case '-':
            result = n1 - n2; // Subtraction
            printf("\nThe subtraction of %d and %d is %.2f\n\n", n1, n2, result);
            break;
      case '*':
            result = n1 * n2; // Multiplication
            printf("\nThe product of %d and %d is %.2f\n\n", n1, n2, result);
            break;
      case '/':
            result = (float)n1 / n2; // Division (typecast to float for decimal result)
            printf("\nThe division of %d and %d is %.2f\n\n", n1, n2, result);
            break;
      default:
            // If user enters an invalid operator
            printf("\nInvalid Input. Please enter a correct operator (+, -, *, /).\n\n");
      }

      return 0; // End of program
}