#pragma once
#include <stdio.h>

/// @file Fibonacci.h

/**
 * Shorthand for "unsigned long long int"
 */
typedef unsigned long long int ull_t;

/**
 * @brief Returns the nth fibonacci number
 *
 * @param n The index of the fibonacci number to return
 *
 * @return The nth fibonacci number
 *
 * @note The function is only guaranteed to work for n >= 0.
 *          No checking is done that memory is available for the lookup table.
 */
ull_t Fibonacci(size_t n);

/**
 * Initializes resources for Fibonacci
 *
 * @return 0 on success, -1 on failure to allocate memory
 */
int InitFibonacci(void);

/**
 * Frees resources for Fibonacci
 *
 * @note This function can be called multiple times. After calling Fibonacci,
 *           you will need to call this function again to free the resources.
 */
void FinalizeFibonacci(void);
