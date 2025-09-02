// Create a simple text - based user login system that compares a stored password string using strcmp.

#include <stdio.h>  // Required for printf, fgets
#include <string.h> // Required for strcmp, strlen

int main()
{
      // Stored password (the correct one to check against)
      const char stored_password[] = "MASTERmind's SYSTEM2203";

      // Array to store the user’s entered password
      char entered_password[50];

      // Prompt user to enter password
      printf("\nEnter the password to login: ");
      fgets(entered_password, sizeof(entered_password), stdin);
      // fgets() reads input from user, including spaces
      // BUT it also stores the '\n' (newline) when user presses Enter

      // ---- Fixing the newline issue ----
      // fgets leaves a newline '\n' at the end of the string if there is space
      // Example: if user types "abc", fgets stores "abc\n\0"
      // We need to remove '\n' or strcmp will fail.

      // The strlen() function is used to find the length of a string(i.e., the number of characters in it, excluding the '\0' null terminator at the end).

      if (entered_password[strlen(entered_password) - 1] == '\n')
      {
            entered_password[strlen(entered_password) - 1] = '\0';
      }

      // In C language, the strcmp() function is used to compare two strings(character arrays).

      // ---- Password Comparison ----
      // strcmp returns:
      //    0   → if both strings are exactly equal
      //   <0   → if first string is smaller
      //   >0   → if first string is greater

      if (strcmp(entered_password, stored_password) == 0)
      {
            printf("\nLogin Successful.\n\n");
      }
      else
      {
            printf("\nLogin Failed. Incorrect password. Try Again!\n\n");
      }

      return 0; // End of program
}

/*
HOW THIS PROGRAM WORKS:-

1. It has a fixed password saved inside the program.

2. The user is asked to type a password.

3. It removes the unwanted \n (newline) from the input.

4. It compares the typed password with the stored one using strcmp().

5. If they match → login success, else → login failed.
*/