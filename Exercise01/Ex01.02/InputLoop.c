#include <stdio.h>
#include <ctype.h>
#include "InputLoop.h"

void InputLoop(void)
{
    char input;
    do
    {
        printf("Enter a character: ");
        input = ReadCharacter();
        if (!IsQ(input))
        {
            PrintUpperCase(input);
        }
    } while (!IsQ(input));
}

char ReadCharacter()
{
    char input;
    scanf(" %c", &input);
    return input;
}

void PrintUpperCase(char input)
{
    // print input in upper case
    printf("%c\n", toupper(input));
}

bool IsQ(char input)
{
    return input == 'Q' || input == 'q';
}
