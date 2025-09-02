// Create a program that categorize a person into different age groups
//     Child->below 13 Teen->below 20 Adult->below 60 Senior->above 60

#include <stdio.h>

int main()
{
      int age;
      printf("\nEnter your age: ");
      scanf("%d", &age);

      if (age < 13)
      {
            printf("\nYou are a Child.\n\n");
      }
      else if (age < 20)
      {
            printf("\nYou are a Teen.\n\n");
      }
      else if (age < 60)
      {
            printf("\nYou are an Adult.\n\n");
      }
      else
      {
            printf("\nYou are a Senior.\n\n");
      }

      return 0;
}