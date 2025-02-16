#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

///////////////////////////// NOTES ////////////////////////////////////
// String provided by cs50 library (NOT REAL)
// Segmentation fault => Computer reading out of bounds value
// int argc    => ARGument COUNT
// string argv => ARGument VECTOR
///////////////////////////////////////////////////////////////////////

// Check if string is in alphabetical order
// Get word input from terminal directly (Command-line arguments)

int main(int argc, string argv[])
{
    // Check 2 arguments exactly  are provided in terminal (./alphabetical mostafa)
    if(argc != 2)
    {
        printf("Please provide a word in terminal\n");
        return 1;
    }

    // Get user's input from terminal
    string text = argv[1];

    // Check input is letters ONLY
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if(!isalpha(text[i]))
        {
            printf("Input letters only!\n");
            return 2;
        }
    }

    // Iterate through each character of string
    for (int i = 1, length = strlen(text); i < length; i++)
    {
        // Check ASCII value of current & previous letters
        if(text[i] < text[i - 1])
        {
            printf("Not alphabetical\n");
            return 0;
        }
    }
    printf("Alphabetical Order\n");
}
