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
 */
ull_t Fibonacci(size_t n);
