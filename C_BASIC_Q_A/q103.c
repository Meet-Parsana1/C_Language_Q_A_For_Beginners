// Develop a program that appends user input to the end of a log file each time it's run.

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
      // Open file in append mode ("a")
      // If file does not exist, it will be created.
      // In append mode, new data is added at the end of the file.
      FILE *file = fopen("C:\\Users\\Meet Parsana\\Downloads\\Log.txt", "a");

      // Check if file opened successfully
      if (file == NULL)
      {
            printf("\nError while opening the file.\n");
            return 1; // Exit if file not opened
      }
      else
      {
            printf("\nFile opened successfully.\n");
      }

      // Array to store user input
      char userInput[100];

      // Prompt the user for input
      printf("\nEnter the text you want to append in the file: ");
      fgets(userInput, sizeof(userInput), stdin); // fgets allows spaces in input

      // Write the user input at the end of the file
      fprintf(file, "%s", userInput);

      // Close the file after appending
      fclose(file);

      printf("\nData appended successfully in the file and file closed.\n\n");

      return 0;
}
