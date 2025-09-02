// Create a program to print the area of a circle by inputting its radius.

#include <stdio.h> // Required for printf and scanf functions

int main()
{
      // Defining a constant for pi
      // Method 1: Using 'const' keyword
      const float PI = 3.14159;
      
      // Method 2: Using preprocessor directive (commented out)
      // #define PI 3.14159;

      // Declaring a variable to store the radius of the circle
      float radius; // float allows decimal input, e.g., 2.5

      // Asking the user to input the radius
      printf("\nEnter the radius of the circle: ");
      // Reading user input and storing it in 'radius'
      scanf("%f", &radius); // %f is for float, &radius passes the memory address

      // Calculating the area of the circle
      // Formula: Area = π * radius^2
      float Area = PI * radius * radius;

      // Printing the area
      // %.2f rounds the output to 2 decimal places for readability
      printf("\nArea of Circle: %.2f\n\n", Area);

      return 0; // End of program
}
