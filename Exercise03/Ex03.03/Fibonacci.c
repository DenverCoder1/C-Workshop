#include <stdio.h>
#include "Fibonacci.h"

ull_t Fibonacci(size_t n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n < 2)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
