#include <stdio.h>
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
            PrintCharacter(input);
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

void PrintCharacter(char input)
{
    // print the character
    printf("%c\n", input);
}

bool IsQ(char input)
{
    // return true if input is 'q' or 'Q'
    return input == 'Q' || input == 'q';
}
