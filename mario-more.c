#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, row, column, spaces;

    // Check valid height input
    do
    {
        height = get_int("Height: ");

    }
    while (height < 0 || height > 8);

    // Iterate for height levels
    for(row = 0; row < height; row++)
    {
        // Print spaces of right-aligned pyramid
        for(spaces = height - row - 1; spaces > 0; spaces--)
        {
            printf(" ");
        }

        // Print hashes
        for(column = 0; column <= row; column++)
        {
            printf("#");
        }

        // Print left-aligned pyramid
        printf("  ");
        for(column = 0; column <= row; column++)
        {
            printf("#");
        }

        printf("\n");
    }
}

