// Write a program that copies one text file's contents to another, stopping when it reaches EOF of the source file.

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
#include <stdlib.h>

int main()
{
      FILE *sourceFile, *destinationFile;

      // Open the source file in read mode
      sourceFile = fopen("C:\\Users\\Meet Parsana\\Downloads\\source.txt", "r");

      // Open the destination file in write mode
      destinationFile = fopen("C:\\Users\\Meet Parsana\\Downloads\\destination.txt", "w");

      // Check if file opening failed
      if (sourceFile == NULL || destinationFile == NULL)
      {
            printf("\nError while opening the file.\n");
      }
      else
      {
            printf("\nFiles opened successfully.\n");
      }

      char text;

      // Read character by character from source until EOF
      while (fscanf(sourceFile, "%c", &text) != EOF)
      {
            // Write the character into destination file
            fprintf(destinationFile, "%c", text);
      }

      // Close both files
      fclose(sourceFile);
      fclose(destinationFile);

      printf("\nText copied and files closed successfully.\n\n");

      return 0;
}
