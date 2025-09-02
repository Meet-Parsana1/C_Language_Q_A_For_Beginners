// Write a program to convert a input string to uppercase.
#include <stdio.h>
#include <string.h> // Header file required for string handling functions like strlen(), strupr(), etc.

int main()
{
      char str[100];
      printf("\nEnter a string in lowercase: ");
      fgets(str, sizeof(str), stdin); // Reads a string including spaces

      // ---------- FIRST METHOD ----------
      // Without using strupr()
      // for (int i = 0; str[i] != '\0'; i++) {
      //       if (str[i] >= 'a' && str[i] <= 'z') {
      //             str[i] = str[i] - 'a' + 'A'; // Convert lowercase to uppercase
      //       }
      // }

      // ---------- SECOND METHOD ----------
      // Using strupr() function (non-standard, works in some compilers like Turbo C / MSVC)
      strupr(str);

      printf("\nString in uppercase: %s\n", str);

      return 0;
}
/*
LOGIC EXPLANATION FOR THE FIRST METHOD:-

🧠Step-by-Step Logic :
      1. Loop through the string
            --> for (int i = 0; str[i] != '\0'; i++)
            --> A string in C is an array of characters ending with a null character('\0').
            --> This loop keeps checking each character until it reaches the end of the string.

      2. Check if character is lowercase
            --> if (str[i] >= 'a' && str[i] <= 'z')
            --> Characters in C are stored as ASCII values.
            --> 'a' → ASCII value 97
            --> 'z' → ASCII value 122
            --> This condition checks:
                  👉 If the current character lies between 97 and 122, it is a lowercase letter.

      3. Convert to uppercase
            --> str[i] = str[i] - 'a' + 'A';
            --> Now the magic happens 😃
            --> In ASCII, uppercase letters are exactly 32 values before their lowercase version.
            --> 'a' = 97 → 'A' = 65, 'b' = 98 → 'B' = 66 ...so on.
            --> So:
                  -->str[i] - 'a' → Finds the position of the letter in the alphabet.
                        --> Example: 'c' - 'a' = 2

                  -->Then we add 'A' → Gets the uppercase ASCII value.
                        Example: 2 + 'A' = 67 = 'C'

                  ✅ This ensures every lowercase letter is shifted to its matching uppercase.

      4. Characters that are not lowercase remain unchanged
            --> If the character is already uppercase, a digit, space, or symbol → the if condition is false → nothing changes.
*/

/*
LOGIC EXPLANATION FOR THE SECOND METHOD:-

A. Directly converts the string to uppercase using strupr() function that converts string to uppercase.
B. ⚠️ Note : strupr() is not part of the C standard library.It may not work in GCC / Linux, but works in some compilers(like Turbo C / Visual Studio).
*/
