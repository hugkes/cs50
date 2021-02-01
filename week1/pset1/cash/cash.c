#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Prompt user for change required
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    // Must be positive
    while (dollars < 0);

    int cents = round(dollars * 100);

    //try 25 cent
    int a = cents / 25;
    a = (int)floor(a);
    // remainder
    int r = cents - (a * 25);

    //try 10 cent
    int b = r / 10;
    b = (int)floor(b);
    // remainder
    r = r - (b * 10);

    //try 5 cent
    int c = r / 5;
    c = (int)floor(c);
    // remainder
    r = r - (c * 5);

    //try 1 cent
    int d = r / 1;
    d = (int)floor(d);
    // remainder
    r = r - (d * 1);

    int coins = a + b + c + d;

    // Print number of coins
    printf("%i\n", coins);
}


