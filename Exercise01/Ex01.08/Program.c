#include "NotQuiteEdges.h"
#include <stdio.h>

/**
 * @brief Test not quite edges
 */
int main(void)
{
    int result = PrintNotQuiteEdges();

    // If the result is negative, there was no result
    if (result < 0)
    {
        printf("No result.\n");
    }

    return 0;
}
