// Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.

#include <stdio.h> // Required for printf and scanf functions

int main()
{
      // Defining a constant for pi
      // Method 1: Using 'const' keyword
      const float PI = 3.14159;
      
      // Alternatively, you can use a preprocessor directive to define pi
      // Method 2: Using preprocessor directive (commented out)
      // #define PI 3.14159;

      // Declaring a variable to store the radius of the circle
      float radius; // float is used to allow decimal input

      // Asking the user to enter the radius
      printf("\nEnter the radius of the circle: ");
      // Reading user input and storing it in 'radius'
      scanf("%f", &radius); // %f is for float, &radius passes the memory address

      // Calculating the circumference of the circle
      // Circumference formula: 2 * pi * radius
      float circumference = 2 * PI * radius;

      // Printing the circumference
      // %.2f rounds the output to 2 decimal places
      printf("\nCircumference of the circle: %.2f units.\n\n", circumference);

      return 0; // End of program
}
