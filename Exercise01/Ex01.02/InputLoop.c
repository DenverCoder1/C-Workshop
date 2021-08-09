#include <stdio.h>
#include <ctype.h>
#include "InputLoop.h"


void InputLoop(void)
{
    char input;
    // loop until the user enters 'Q' or 'q'
    do
    {
        // prompt the user for input
        printf("Enter a character: ");
        // get the input
        input = ReadCharacter();
        // print the input if it is not 'Q' or 'q'
        if (!IsQ(input))
        {
            PrintUpperCase(input);
        }
    } while (!IsQ(input));
}

char ReadCharacter()
{
    // read a character from the user
    char input;
    scanf(" %c", &input);
    // return the character
    return input;
}

void PrintUpperCase(char input)
{
    // print input in upper case
    printf("%c\n", toupper(input));
}

bool IsQ(char input)
{
    // return true if input is 'q' or 'Q'
    return input == 'Q' || input == 'q';
}
