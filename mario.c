// Julian Hasse, 2019
#include <cs50.h>
#include <stdio.h>

int main(void)
  {
        // declare global variables
        int height, row;

         do
         {
             height = get_int("Height: ");  // Prompt user
         }   while (height < 0 || height > 8);  // Limit input's range

  for (row = 1 ; row <= height ; row++) // Create rows
      {

          // Print Left Pyramid + Space + Right Pyramid with nested loops
          for (int space = height; space > row; space--)
          {
              printf(" ");
          }

          // Print Left pyramid
          for (int left = 0; left < row ; left++)
          {

              printf("#");
          }

          // Print Gap
          printf("  ");

          // Print Right pyramid
          for (int right = 0; right < row ; right++)
          {

              printf("#");
          } 
          printf("\n"); // Insert new line
      }

  }
