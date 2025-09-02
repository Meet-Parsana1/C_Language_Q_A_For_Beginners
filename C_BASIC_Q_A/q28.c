// Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" using the ternary operator (e.g.,High for scores > 80, Moderate for 50-80, Low for < 50).

#include <stdio.h>

int main()
{
      int score;
      printf("\nEnter the marks: ");
      scanf("%d", &score);

      score >= 80 ? printf("\nHigh score.\n\n") : score >= 50 && score < 80 ? printf("\nModerate score.\n\n")
                                                                              : printf("\nLow score.\n\n");

      // The ternary operator in C is also called the conditional operator.Its symbol is ?: and it is the shortest way to write an if - else statement.

      // General Syntax :
      // condition ? expression_if_true : expression_if_false;

      return 0;
}