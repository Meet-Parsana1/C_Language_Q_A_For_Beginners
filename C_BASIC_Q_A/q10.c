// Create a program to swap two numbers using two different methods

#include <stdio.h> // Required for printf function

int main()
{
      // ----------------------------
      // Method 1 - Using a Third Variable
      // ----------------------------
      int A = 1;     // Declare first number and assign value 1
      int B = 2;     // Declare second number and assign value 2
      int Temperory; // Temporary variable to help in swapping

      // Display values before swapping
      printf("\nValue of A & B before swapping: \n");
      printf("\nA: %d, B: %d.\n", A, B);

      // Swapping logic using a temporary variable
      Temperory = A; // Store the value of A in Temperory
      A = B;         // Assign the value of B to A
      B = Temperory; // Assign the stored value of A (in Temperory) to B

      // Display values after swapping
      printf("\nValue of A & B after swapping: \n");
      printf("\nA: %d, B: %d.\n\n", A, B);

      // ----------------------------
      // Method 2 - Without Using a Third Variable
      // ----------------------------
      // This method swaps numbers using arithmetic operations (addition & subtraction)
      // int A = 1;
      // int B = 2;

      // printf("\nValue of A & B before swapping: \n");
      // printf("\nA: %d, B: %d.\n", A, B);

      // A = A + B; // Step 1: sum of A and B stored in A
      // B = A - B; // Step 2: subtract B from new A to get original A, assign to B
      // A = A - B; // Step 3: subtract new B from A to get original B, assign to A

      // printf("\nValue of A & B after swapping: \n");
      // printf("\nA: %d, B: %d.\n\n", A, B);

      return 0; // End of program
}
