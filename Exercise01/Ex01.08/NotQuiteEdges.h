#pragma once
#include <stdbool.h>

/**
 * @file NotQuiteEdges.h
 */

 /**
  * @brief Reads numbers from the user
  * (terminated by 0) and returns the second smallest
  * and second largest in the corresponding parameters.
  *
  * @note There must be at least two numbers to compute a valid output.
  *
  * @param secondSmallest Address to store the second smallest number.
  * @param secondLargest Address to store the second largest number.
  * @return 0 on success, -1 if there are fewer than two numbers
  */
int NotQuiteEdges(int *secondSmallest, int *secondLargest);

/**
 * @brief Reads numbers from the user
 * (terminated by 0) and prints the second
 * largest and second smallest numbers.
 *
 * @note There must be at least two numbers to compute a valid output.
 *
 * @return 0 on success, -1 if there are fewer than two numbers
 */
int PrintNotQuiteEdges();

/**
 * @brief Prompts and reads a number from the user
 *
 * @return int The number read
 */
int ReadNumber();

