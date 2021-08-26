#pragma once
#include <stdbool.h>

/**
 * @file ValidateId.h
 */

 /**
  * Maximum length of an ID.
  */
static const int ID_MAX_LENGTH = 9;

/**
 * @brief Get the check digit for an Israeli ID number.
 *
 * @param remainingId The first 8 digits of the ID number
 * @return int The check digit for the ID number
 */
int ComputeCheckDigit(int remainingId);

/**
 * @brief Compute the sum of the digits in a number.
 *
 * @param number The number to sum
 * @return int The sum of the digits in the number
 */
int SumOfDigits(int number);
