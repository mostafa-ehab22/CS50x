#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢)
    int cents, quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    // Check valid cents input
    do
    {
        cents = get_int("Cents: ");
    }
    while (cents < 0);

    // Greedy Algorithm
    while (cents > 0)
    {

        if (cents >= 25)
        {
            cents -= 25;
            quarters++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            dimes++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            nickels++;
        }
        else
        {
            cents -= 1;
            pennies++;
        }
    }
    printf("Coins required: %i\n", quarters + dimes + nickels + pennies);
}
