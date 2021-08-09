#include "Diamond.h"
#include <stdio.h>

/**
 * @brief Test diamond function
 */
int main(void)
{
    // read diamond size
    int diamondSize;
    printf("Enter the size of the diamond: ");
    scanf("%d", &diamondSize);

    // create diamond
    const int result = PrintDiamond(diamondSize);

    // negative result means error
    if (result < 0)
    {
        printf("Error: Invalid size!\n");
    }

    return 0;
}
