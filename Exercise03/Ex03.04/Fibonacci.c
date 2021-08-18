#include <stdlib.h>
#include <malloc.h>
#include "Fibonacci.h"

static ull_t *s_fibonacciLookup = NULL;
static size_t s_fibonacciLookupSize = 0;

ull_t Fibonacci(size_t n)
{
    size_t oldSize = s_fibonacciLookupSize;

    // initialize lookup table if it is not already initialized
    if (s_fibonacciLookup == NULL)
    {
        InitFibonacci();
    }

    // increase the size of lookup table if necessary
    if (n >= s_fibonacciLookupSize)
    {
        // otherwise, increase the size of the lookup table
        s_fibonacciLookupSize = n + 1;
        s_fibonacciLookup = (ull_t *) realloc(s_fibonacciLookup, s_fibonacciLookupSize * sizeof(ull_t));

        // fill lookup table with fibonacci numbers
        for (size_t index = oldSize; index < s_fibonacciLookupSize; index++)
        {
            s_fibonacciLookup[index] = s_fibonacciLookup[index - 1] + s_fibonacciLookup[index - 2];
        }
    }

    return s_fibonacciLookup[n];
}

int InitFibonacci(void)
{
    // skip if already initialized
    if (s_fibonacciLookup != NULL)
    {
        return 0;
    }

    // initialize the lookup table
    s_fibonacciLookupSize = 2; // initial size
    s_fibonacciLookup = (ull_t *) malloc(s_fibonacciLookupSize * sizeof(ull_t));

    // check if memory allocation was successful
    if (s_fibonacciLookup == NULL)
    {
        return -1;
    }

    // initialize the lookup table with first 2 fibonacci numbers
    s_fibonacciLookup[0] = 0;
    s_fibonacciLookup[1] = 1;

    return 0;
}

void FinalizeFibonacci(void)
{
    // if lookup table is not initialized, then do nothing
    if (s_fibonacciLookup == NULL)
    {
        return;
    }
    // free the lookup table
    free(s_fibonacciLookup);
    s_fibonacciLookup = NULL;
}
