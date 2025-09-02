// Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword(like "exit") is entered.

#include <stdio.h>
#include <string.h> //Header file required for string handling functions like strlen(), strcmp(), etc.

int main()
{
      // Define the keyword to exit the loop
      const char EXIT[] = "EXIT";

      char str[100]; // Array to store user input

      // Infinite loop (runs forever unless we break it)
      while (1)
      {
            // Ask the user for input
            printf("\nEnter a string (or type \"EXIT\" to quit): ");
            fgets(str, sizeof(str), stdin);

            // fgets() includes a newline '\n', replace it with '\0'
            str[strlen(str) - 1] = '\0';
            // strlen() function in c used to find the length of a string excluding the null terminator('\0').

            // Compare entered string with "EXIT"
            if (strcmp(str, EXIT) == 0)
            {
                  // If user typed EXIT → break out of loop
                  break;
            }
            // In C language, the strcmp() function is used to compare two strings(character arrays).

            // strcmp returns:
            //    0   → if both strings are exactly equal
            //   <0   → if first string is smaller
            //   >0   → if first string is greater
      }

      // Loop ends when EXIT is typed
      printf("\nYou Exited the loop!!\n\n");

      return 0; // End of program
}

/*

🔎 Explanation of Logic:

1. while(1) → creates an infinite loop.
2. Inside the loop, user enters a string.
3. strcmp(str, EXIT) == 0 checks if input matches "EXIT".
4. If true → break statement stops the loop immediately.
5. If not → loop continues asking again.

*/

