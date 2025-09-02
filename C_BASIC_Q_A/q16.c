// Create a program to calculate Simple Interest.

// Formula: Simple Interest (SI) = (P × T × R) / 100
// P = Principal amount, T = Time (in years), R = Rate of Interest (per annum)

#include <stdio.h>

int main()
{
      // Declare variables
      int principal_amount; // Principal money
      int time;             // Time in years
      float rate;           // Rate of interest (in %)

      // Input principal amount
      printf("\nEnter the principal amount: ");
      scanf("%d", &principal_amount);

      // Input time
      printf("Now, enter the time (in years): ");
      scanf("%d", &time);

      // Input rate
      printf("Finally, enter the rate of interest: ");
      scanf("%f", &rate);

      // Calculate simple interest
      float simple_interest = (principal_amount * time * rate) / 100;

      // Display result
      printf("\nSimple Interest = %.2f\n\n", simple_interest);

      return 0; // End of program
}
