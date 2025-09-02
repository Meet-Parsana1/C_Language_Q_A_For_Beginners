// Write a program that asks the user for a filename, attempts to open it,
// and reports whether the operation was successful or not.

/*
📂 What is File Handling in C?

👉 File Handling in C means storing data in files permanently on your computer’s hard drive
and then being able to read, write, update, or delete that data whenever needed.

Normally, variables in C store data in RAM (temporary memory). Once the program ends, all data is lost.
But with File Handling, data is stored in a file (like .txt, .dat, etc.) on disk → so it remains saved
even after the program ends.

🔑 Why Use File Handling?
- Data Permanence → Data stays saved even after program closes.
- Large Data Handling → You can store thousands of records (not possible with just variables).
- Data Sharing → Files can be opened and shared by other programs too.

📌 File Handling Functions in C
- fopen()  → Open a file (create if it doesn’t exist).
- fprintf() → Write formatted data into a file.
- fscanf() → Read formatted data from a file.
- fputs() / fputc() → Write a string/character into a file.
- fgets() / fgetc() → Read a string/character from a file.
- fclose() → Close an opened file.
- fseek(), ftell(), rewind() → Move the file pointer for random access.

📌 File Modes in C (used in fopen)
- "r" → Open file for reading (file must exist).
- "w" → Open file for writing (creates new file or erases existing file).
- "a" → Open file for appending (data is added at the end).
- "r+" → Open file for both reading & writing.
- "w+" → Open file for reading & writing (creates new file, erases old).
- "a+" → Open file for reading & appending.
*/

#include <stdio.h>

int main()
{
      FILE *file;         // Declare a FILE pointer
      char filename[100]; // To store filename from user

      // Asking user for filename
      printf("Enter the filename (with path if not in same folder): ");
      scanf("%99s", filename); // Take filename input safely

      // Attempt to open file in read mode
      file = fopen(filename, "r");

      if (file == NULL)
      {
            // If file pointer is NULL, file couldn’t be opened
            printf("\n❌ Failed to open the file: %s\n", filename);
      }
      else
      {
            // File opened successfully
            printf("\n✅ File opened successfully: %s\n", filename);

            // Always close file after use
            fclose(file);
      }

      return 0;
}
