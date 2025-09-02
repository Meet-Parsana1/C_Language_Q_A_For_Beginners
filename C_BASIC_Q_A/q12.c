// Given an integer value, convert it to a floating - point value and print both.

#include <stdio.h>

int main()
{
      int a = 3;

      // Implicit type casting, means c will automatically convert it into a floating-point number.
      float b = a;
      
      // Explicit type casting, means we manually convert it.
      int c = (float)a;

      printf("\nThe value of a: %d\n", a);
      printf("\nThe value of a after implicit type casting: %.2f\n", b);
      printf("\nThe value of a after explicit type casting: %.2f\n\n", c);

      return 0;
}