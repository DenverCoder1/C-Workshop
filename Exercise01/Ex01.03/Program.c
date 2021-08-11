#include "StringLength.h"

/**
 * @brief Test string length function
 */
int main(void)
{
    const char *str = "Hello World!";

    printf("The length of the string is %d.\n", (unsigned int) StringLength(str));

    return 0;
}
