#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {
        start = get_int("Starting Population: ");
    }
    while (start < 9);

    // Prompt for end size
    int end;
    do
    {
        end = get_int("End Population: ");
    }
    while (end < start);

    // Calculate number of years until we reach threshold
    int i = start;
    int years = 0;
    while (end > i)
    {
        float x = round(i / 3);
        float y = round(i / 4);
        i = i + x - y;
        years++;
    }

    // Print number of years
    printf("Years: %i\n", years);
}