#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Parameters name in function prototype & definition may be different
// (Types and their order can NOT be changed)
int compute_score(string user_input);

int main(void)
{
    // string is NOT built-in type in c "Provided by cs50 library"
    string player1, player2;
    int total1, total2;

    // Get input & store it as array of characters for easy iteration
    player1 = get_string("Player 1: ");
    player2 = get_string("Player 2: ");

    total1 = compute_score(player1);
    total2 = compute_score(player2);

    if (total1 > total2)
    {
        printf("Player 1 wins!\n");
    }
    else if (total1 < total2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // Keep track of score
    int score = 0;

    // Compute score for each character
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        // Capital letters
        if (isupper(word[i]))
        {
            // 'A' - 'A' = 65 - 65 = 0  => First index in POINTS[]
            score += POINTS[word[i] - 'A'];
        }
        // Small letters
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }

    return score;
}
