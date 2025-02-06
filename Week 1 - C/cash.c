#include <cs50.h>
#include <stdio.h>

// Function prototype
int calculateCoins(int money); // To use function in main() before it's declared

int main(void)
{
    int cents;

    // Check valid cents input
    do
    {
        cents = get_int("Cents: ");
    }
    while (cents < 0);

    // Calculate coins required & Print Result
    printf("Coins required: %i\n", calculateCoins(cents));
}

// Modular function
int calculateCoins(int money)
{

    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    // Greedy Algorithm
    while (money > 0)
    {

        if (money >= 25)
        {
            money -= 25;
            quarters++;
        }
        else if (money >= 10)
        {
            money -= 10;
            dimes++;
        }
        else if (money >= 5)
        {
            money -= 5;
            nickels++;
        }
        else
        {
            money -= 1;
            pennies++;
        }
    }
    return quarters + dimes + nickels + pennies;
}
