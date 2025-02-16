#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Check if string is in alphabetical order

int main(void)
{
    // String provided by cs50 library (NOT REAL)
    string text = get_string("Input: ");

    // Iterate through each character of string
    for (int i = 0, length = strlen(text) ; i < length; i++)
    {
        // Check ASCII value of current & previous
        if(text[i] < text[i - 1])
        {
            printf("Not alphabetical\n");
            return 0;
        }
    }
    printf("Alphabetical Order");
}
