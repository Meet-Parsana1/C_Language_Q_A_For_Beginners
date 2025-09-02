// Use a 2D character array to store and display a tic-tac-toe board.

#include <stdio.h>

int main()
{
      // Declare and initialize a 2D array with 3 rows and 5 columns
      // Each row represents one line of the tic-tac-toe board
      // We are using '_' for empty places and '|' as column separators
      // Note: The last row is spaces because in a real tic-tac-toe board, the bottom cells don’t need underscores.
      char tic_tac_toe[3][5] = {
          {'_', '|', '_', '|', '_'}, // First row -> "_|_|_"
          {'_', '|', '_', '|', '_'}, // Second row -> "_|_|_"
          {' ', '|', ' ', '|', ' '}  // Third row -> " | | "
      };

      // Outer loop -> iterates over each row of the array
      for (int i = 0; i < 3; i++)
      {
            // Inner loop -> iterates over each column (element) in a row
            for (int j = 0; j < 5; j++)
            {
                  // Print each character (either '_' , '|', or ' ')
                  printf("%c", tic_tac_toe[i][j]);
            }
            // After printing one full row, move to the next line
            printf("\n");
      }

      return 0; // End of program
}
