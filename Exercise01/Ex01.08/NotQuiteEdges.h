#pragma once
#include <stdbool.h>

/**
 * @file Not Quite Edges
 */

 /**
  * @brief Reads numbers from the user
  * (terminated by 0) and returns the second smallest
  * and second largest in the corresponding parameters.
  *
  * @return 0 on success, -1 if there are fewer than 2 numbers
  */
int NotQuiteEdges(int *secondSmallest, int *secondLargest);

/**
 * @brief Reads numbers from the user
 * (terminated by 0) and prints the second
 * largest and second smallest numbers.
 *
 * @return 0 on success, -1 if there are fewer than 2 numbers
 */
int PrintNotQuiteEdges();

/**
 * @brief Prompts and reads a number from the user
 *
 * @return the number read
 */
int ReadNumber();

