// Call a function print_date that prints the current date. Define the function without any parameters.

#include <stdio.h> // Standard input-output library
#include <time.h>  // Library that helps work with date and time

// Function declaration (prototype)
void print_date();

int main()
{
      // Call the function to print the current date
      print_date();

      return 0; // End of program
}

// Function definition
void print_date()
{
      // 'time_t' is a data type that stores calendar time
      time_t current_time;

      // Get the current system time and store it in 'current_time'
      time(&current_time);

      /*
            localtime(&current_time) → converts the time to local time (struct tm format)
            asctime(...) → converts that struct into a readable string (e.g., "Fri Aug 22 11:30:00 2025")
      */
      char *date_string = asctime(localtime(&current_time));

      // Print the date string
      printf("\nCURRENT DATE IS: %s\n\n", date_string);
}