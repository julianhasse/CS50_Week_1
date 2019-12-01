// *** Greedy Algorithm Implementation ***
// by Julian Hasse, 2019

// Headers
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Declare variables
    float change;
    int coins, cents;

    // Limit change owed to positive number
    do
    {
        change = get_float("Change owed: ");
    } while (change < 0);

    // Rounding cents to the nearest penny + type casting
    cents = (int)round(change * 100);

    // Initialize coins
    coins = 0;

    // Biggest Bite - Quarters
    coins += cents / 25;
    cents %= 25;

    // Second Bite - Dimes
    coins += cents / 10;
    cents %= 10;

    // Third Bite - Nickels
    coins += cents / 5;
    cents %= 5;

    // Last Bite - Pennies
    coins += cents;

    // Print Result
    printf("%i\n", coins);

    return 0; // Success return statement
}
