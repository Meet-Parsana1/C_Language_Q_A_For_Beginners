// Create a program to print the month of the year based on a number(1 - 12) input by the user.

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
      int n;

      // Ask the user to enter a number
      printf("\nEnter a number (1-12): ");
      scanf("%d", &n);

      // Use switch-case to determine the month
      switch (n)
      {
      case 1:
            printf("\nJanuary.\n\n");
            break; // Exit switch after executing this case
      case 2:
            printf("\nFebruary.\n\n");
            break;
      case 3:
            printf("\nMarch.\n\n");
            break;
      case 4:
            printf("\nApril.\n\n");
            break;
      case 5:
            printf("\nMay.\n\n");
            break;
      case 6:
            printf("\nJune.\n\n");
            break;
      case 7:
            printf("\nJuly.\n\n");
            break;
      case 8:
            printf("\nAugust.\n\n");
            break;
      case 9:
            printf("\nSeptember.\n\n");
            break;
      case 10:
            printf("\nOctober.\n\n");
            break;
      case 11:
            printf("\nNovember.\n\n");
            break;
      case 12:
            printf("\nDecember.\n\n");
            break;
      default:
            // If user enters a number outside 1-12
            printf("\nInvalid input! Please enter a number between 1 and 12.\n\n");
      }

      return 0; // End of program
}