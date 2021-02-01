// Header files
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input from user and save to variable
    string answer = get_string("What's your name? ");
    // Print input in formatted string
    printf("hello, %s\n", answer);
}