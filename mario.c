// Main function
//  Get user input for height
//  Outer loop: iterate over each level of the pyramid until height input is reached
//      Create variable spaces = height - (i + 1) to calculate the number of spaces needed for right alignment
//      First inner loop: print the calculated spaces
//      Create variable hashes = i + 1 to calculate number of hashes
//      Second inner loop: print the left side hashes
//      Print a gap of two spaces between the pyramid halves
//      Print right side hashes
//      Start new line

#include <cs50.h>
#include <stdio.h>

int main(void) // Main function
{
    // Declare height variable so the while part works
    int height;
    // do-while loop to check for correct value
    do
    {
        // Get the height of the pyramid from the user
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Outer loop: iterate over each level of the pyramid
    for (int i = 0; i < height; i++)
    {
        // Calculate the number of spaces needed for right alignment
        int spaces = height - (i + 1);

        // First inner loop: print the calculated spaces
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // Calculate the number of hashes to print
        int hashes = i + 1;

        // Second inner loop: print the left side hashes
        for (int k = 0; k < hashes; k++)
        {
            printf("#");
        }

        // Print a gap of two spaces between the pyramid halves
        printf("  ");

        // Third inner loop: print the right side hashes
        for (int l = 0; l < hashes; l++)
        {
            printf("#");
        }

        // Move to the next line after completing one level of the pyramid
        printf("\n");
    }
}
