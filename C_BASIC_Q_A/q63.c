// Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.

#include <stdio.h>

int main()
{
      long long kilometers;
      printf("\nEnter the distance in kilometers: ");
      scanf("%lld", &kilometers);

      // Use double for precise calculation
      double miles = kilometers * 0.621371;

      printf("\nThe distance in miles is %.2f miles.\n\n", miles);

      return 0;
}
