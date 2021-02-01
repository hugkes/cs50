#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get answer from user
    char c = get_char("Do you agree? ");

    // Note single quotes around chars
    if (c == 'y' || c == 'Y')
	{
	    printf("Agreed\n");
	}
	else if (c == 'n' || c == 'N')
	{
        printf("Not agreed\n");
    }
}