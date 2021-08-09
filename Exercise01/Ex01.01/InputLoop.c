#include <stdio.h>
#include <stdbool.h>
#include "InputLoop.h"

void InputLoop(void)
{
    char input;
    do
    {
        printf("Enter a character: ");
        input = ReadCharacter();
        PrintCharacter(input);
    } while (IsQ(input));
}

char ReadCharacter()
{
    char input;
    scanf(" %c", &input);
    return input;
}

void PrintCharacter(char input)
{
    printf("%c\n", input);
}

bool IsQ(char input)
{
    return input == 'Q' || input == 'q';
}
