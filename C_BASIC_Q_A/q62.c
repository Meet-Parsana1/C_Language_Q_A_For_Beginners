// Implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference.Write a main function to test it with different values.

// What is pointer in C ?
// A pointer in C is a variable that stores the memory address of another variable.Instead of holding a direct value(like int a = 5;), a pointer holds the location in memory where that value is stored.

#include <stdio.h>

// Function declaration: takes four integer pointers
void minmax(int *, int *, int *, int *);

int main()
{
      int n1;
      printf("\nEnter the first number: ");
      scanf("%d", &n1); // Input first number

      int n2;
      printf("Finally, Enter the second number: ");
      scanf("%d", &n2); // Input second number

      int MIN, MAX; // Variables to store minimum and maximum values

      // Call minmax function, passing addresses of n1, n2, MIN, and MAX
      minmax(&n1, &n2, &MIN, &MAX);

      return 0; // End program
}

// Function definition
void minmax(int *a, int *b, int *min, int *max)
{
      // Compare the values stored at addresses a and b
      if (*a > *b)
      {
            *min = *b; // store smaller value in 'min'
            *max = *a; // store larger value in 'max'
      }
      else
      {
            *min = *a;
            *max = *b;
      }

      // Print results
      printf("\nMax Value: %d.\nMin Value: %d.\n\n", *max, *min);
}

/*
✅ Key Points:

--> minmax(&n1, &n2, &MIN, &MAX); → passes addresses to the function.

--> Inside minmax, dereferencing (*a, *b) allows direct access to original variables.

--> This is an example of call by reference, where function changes are reflected in the original variables.
*/