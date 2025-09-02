// Create a program that calculates grades based on marks
//     A -> above 90 %
//     B -> above 75 %
//     C -> above 60 %
//     D -> above 30 %
//     F -> below 30 %

#include <stdio.h>

int main()
{
      float marks;
      printf("\nEnter the marks: ");
      scanf("%f", &marks);

      if (marks >= 90)
      {
            printf("\nGrade A\n");
      }
      else if (marks >= 75)
      {
            printf("\nGrade B\n");
      }
      else if (marks >= 60)
      {
            printf("\nGrade C\n");
      }
      else if (marks >= 30)
      {
            printf("\nGrade D\n");
      }
      else
      {
            printf("\nGrade F (Failed)\n");
      }

      return 0;
}
