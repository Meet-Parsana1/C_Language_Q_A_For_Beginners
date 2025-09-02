// Create a program to find the Least Common Multiple(LCM) of two numbers.

//🔹Definition of LCM:-

// LCM(Least Common Multiple) of two numbers is the smallest positive number that is a multiple of both numbers.
// 👉 In other words, it is the smallest number that both given numbers can divide exactly without leaving a remainder.

#include <stdio.h>

int main()
{
      // Inputting two numbers from the user
      int n;
      printf("\nEnter the first positive integer number: ");
      scanf("%d", &n);

      int m;
      printf("\nFinally, Enter second positive integer number: ");
      scanf("%d", &m);

      int max = m > n ? m : n; // To Find Maximum of the Two given Numbers 

      int LCM;

      for (int i = max; i <= m * n; i++)
      {
            if (i % m == 0 && i % n == 0)
            {
                  LCM = i;
                  break;
            }
      }
      // Explanation of logic:-

      // --> Loop starts from max and goes up to m *n(worst case, where LCM is the product of the numbers).

      // --> The first number divisible by both m and n is the LCM.

      // --> break; ensures we stop at the first(smallest) such number.

      printf("\nThe LCM of %d and %d is %d.\n\n", n, m, LCM); // printing the output

      return 0;
}