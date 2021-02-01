#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt for height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    int i = 0;

    // Loop for height times
    while (height > i)
    {
        // Spaces decrease as i increases, centering
        for (int l = (height - 1); l > i; l--)
        {
            printf(" ");
        }

        // Then we print as many # as current iteration
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Spaces inbetween then # again and new line
        printf("  ");

        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");

        i++;
    }
}