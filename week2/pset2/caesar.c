#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Checl if no of args is 2
    if (argc == 2)
    {
        // Checks that all char in second string are digits
        for (int i = 0; argv[1][i] != '\0'; i++)
        {
            if (isdigit(argv[1][i]))
            {
                // Pass
            }
            else
            {
                // Return fail
                printf("Useage: %s key\n", argv[0]);
                return 1;
            }
        }
        // Check if that digit is positive
        int digit = atoi(argv[1]);
        if (digit >= 0)
        {
            // Prompt for text to cipher
            string s = get_string("plaintext: ");
            printf("ciphertext: ");
            for (int i = 0; s[i] != '\0'; i++)
            {
                // If uppercase, use A as ASCII mediator
                if isupper(s[i])
                {
                    int n = (((s[i] - 65 + digit) % 26) + 65);
                    char c = n;
                    printf("%c", c);
                }
                // If lowercase, use a as ASCII mediator
                else if islower(s[i])
                {
                    int n = (((s[i] - 97 + digit) % 26) + 97);
                    char c = n;
                    printf("%c", c);
                }
                // If it is not a letter, print as is
                else
                {
                    printf("%c", s[i]);
                }

            }
            printf("\n");
            // Return success
            return 0;
        }
        // Return fail
        else
        {
            printf("Useage: %s key\n", argv[0]);
            return 1;
        }
    }
    // Return fail
    else
    {
        printf("One digit required\n");
        return 1;
    }
}