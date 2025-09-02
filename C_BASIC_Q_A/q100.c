// Create a program that reads integers from a file and calculates their sum.

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
      // Try to open the file in read mode
      FILE *file = fopen("C:\\Users\\Meet Parsana\\Downloads\\SUMS.TXT", "r");

      /*
            🔑 Note:
            - The file should contain integers separated by spaces, tabs, or newlines.
            - Example file content:
            10 20 30
            40 50
            60
      */

      if (file == NULL)
      {
            printf("\nFile not opened.\n");
            return 1; // Exit program with error code
      }
      else
      {
            printf("\nFile opened successfully.\n");
      }

      int number, sum = 0;
      // Read integers until end of file
      while (fscanf(file, "%d", &number) == 1)
      {
            sum = sum + number; // Add each number to sum
      }

      // Print the total sum
      printf("\nThe sum of all numbers present in the file is %d.\n\n", sum);

      // Close the file
      fclose(file);

      return 0;
}