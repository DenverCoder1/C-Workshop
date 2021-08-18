#include <stdio.h>
#include "Fibonacci.h"

int main()
{
    // calculate and store the first 94 Fibonacci numbers
    for (size_t number = 0; number < 94; ++number)
    {
        printf("[%zu] %20llu\n", number, Fibonacci(number));
    }

    // check that Fibonacci retrieves values from the table
    printf("[%d] %20llu\n", 10, Fibonacci(10));

    // free ressources
    FinalizeFibonacci();

    return 0;
}
