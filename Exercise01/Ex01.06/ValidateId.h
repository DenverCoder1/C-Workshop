#pragma once
#include <stdbool.h>

/**
 * @file Validate Id
 */

 /**
  * Maximum length of an ID.
  */
static const int ID_MAX_LENGTH = 9;

/**
 * @brief Get the check digit for an Israeli ID number.
 *
 * @param remainingId the first 8 digits of the ID number
 * @return int the check digit for the ID number
 */
int ComputeCheckDigit(int remainingId);

/**
 * @brief Compute the sum of the digits in a number.
 *
 * @param number the number to sum
 * @return int the sum of the digits in the number
 */
int SumOfDigits(int number);
