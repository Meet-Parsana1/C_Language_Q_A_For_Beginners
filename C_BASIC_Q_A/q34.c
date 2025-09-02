// Create a program that computes the sum of the digits of an integer.

#include <stdio.h>

int main()
{
      int n;
      printf("\nEnter a positive integer number: ");
      scanf("%d", &n);

      int copy = n; // we made a copy of n for calculating the sum of all digits. we don't use n solely for calculating and printing purpose as the value of n will become 0 after the end of the loop so..

      int remainder, sum = 0;

      while (copy > 0)
      {
            int digit = copy % 10; // This will extract the last digit of n.
            sum = sum + digit;     // This will sum up all the digits.
            copy = copy / 10;      // This will reduce the number from the end and update the n.
      }

      printf("\nThe sum of all digits of number %d is %d.\n\n", n, sum);

      return 0;
}