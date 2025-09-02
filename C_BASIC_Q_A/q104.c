// Create a program that performs both reading and writing operations on a file called data.txt

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
      // Open the file in "r+" mode → allows both reading and writing
      FILE *file = fopen("C:\\Users\\Meet Parsana\\Downloads\\both.txt", "r+");
      if (file == NULL)
      {
            // If the file cannot be opened
            printf("\nError while opening the file.\n");
            return 1;
      }
      else
      {
            printf("\nFile opened successfully.\n");
      }

      // Display file content
      printf("\nFile Content:\n");
      char fileContent[100];
      while (fgets(fileContent, sizeof(fileContent), file) != NULL)
      {
            printf("%s", fileContent);
      }

      // Reset file pointer to the beginning before writing
      rewind(file);

      // Get user input
      char text[100];
      printf("\n\nEnter the text you want to write in the file: ");
      fgets(text, sizeof(text), stdin);

      // Write new text into the file (overwrites from beginning)
      fprintf(file, "%s", text);

      // Close the file
      fclose(file);

      printf("\nText written successfully in the file and file closed.\n\n");

      return 0;
}
