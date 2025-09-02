// Create a program using do - while to find password checker until a valid password is entered.

#include <stdio.h>
#include <string.h> //Header file required for string handling functions like strlen(), strcmp(), etc.

int main()
{
      // Store the valid (correct) password
      const char validPassword[] = "MASTERmind's SYSTEM2203";

      char inputPassword[100]; // Array to store user-entered password

      // do-while loop ensures at least one attempt is taken
      do
      {
            // Ask the user for password
            printf("\nEnter the password: ");
            fgets(inputPassword, sizeof(inputPassword), stdin); // Reads input safely

            // fgets also stores the newline '\n' at the end,
            // so we replace it with '\0' (end of string)
            inputPassword[strlen(inputPassword) - 1] = '\0';
            // strlen() function in c used to find the length of a string excluding the null terminator('\0').

            // Loop will continue if password is not correct
      } while (strcmp(inputPassword, validPassword) != 0);
      // In C language, the strcmp() function is used to compare two strings(character arrays).

      // strcmp returns:
      //    0   → if both strings are exactly equal
      //   <0   → if first string is smaller
      //   >0   → if first string is greater

      // When correct password is entered, loop stops
      printf("\nYou entered correct password!!\n\n");

      return 0; // End of program
}

/*
🔎 How the logic works:

1. The do-while loop runs at least once no matter what.
2. User enters a password → program compares it with validPassword using strcmp().
3. If not equal (!= 0), loop repeats → asks again.
4. If equal (== 0), loop ends and program prints success message.
*/
