// Call a function get_average that takes five int numbers and returns the average.

#include <stdio.h>

// Function to calculate average
float get_average(int a, int b, int c, int d, int e)
{
      return (a + b + c + d + e) / 5.0; // used 5.0 to ensure float division
}

int main()
{
      int n1, n2, n3, n4, n5;

      // Input numbers
      printf("\nEnter the first number: ");
      scanf("%d", &n1);

      printf("Now, Enter the second number: ");
      scanf("%d", &n2);

      printf("Now, Enter the third number: ");
      scanf("%d", &n3);

      printf("Now, Enter the fourth number: ");
      scanf("%d", &n4);

      printf("Finally, Enter the fifth number: ");
      scanf("%d", &n5);

      // Call function and store result
      float result = get_average(n1, n2, n3, n4, n5);

      // Display average
      printf("\nThe average of entered 5 numbers is %.2f.\n\n", result);

      return 0;
}