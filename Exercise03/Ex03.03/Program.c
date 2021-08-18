#include <stdio.h>
#include "Fibonacci.h"

/**
 * @brief Test the Fibonacci function
 */
int main()
{
    for (size_t number = 0; number < 40; ++number)
    {
        printf("%30llu\n", Fibonacci(number));
    }
    return 0;
}
