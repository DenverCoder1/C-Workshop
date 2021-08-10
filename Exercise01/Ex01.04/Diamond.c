#include "Diamond.h"
#include <stdio.h>


int PrintDiamond(int diamondSize)
{
    // check if diamondSize is a positive odd integer
    if (diamondSize <= 0 || diamondSize % 2 == 0)
    {
        // return a negative value to indicate an error
        return -1;
    }
    // keep track of the number of characters printed
    int stringLength = 0;
    // print the diamond
    for (int i = 0; i < diamondSize; i++)
    {
        // row index from top if in top half,
        // index from bottom if in bottom half
        const int index = i < (diamondSize - 1) / 2
            ? i
            : diamondSize - 1 - i;
        // print the spaces
        for (int j = 0; j < (diamondSize - 1) / 2 - index; j++)
        {
            stringLength += printf(" ");
        }
        // print the asterisks
        for (int k = 0; k < 2 * index + 1; k++)
        {
            stringLength += printf("*");
        }
        // print a new line
        printf("\n");
    }
    // return the length of the string
    return stringLength;
}
