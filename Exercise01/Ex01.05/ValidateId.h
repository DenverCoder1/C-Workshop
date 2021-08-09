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
 * @brief Validate a 9-digit Israeli ID number
 * according to the Luhn algorithm.
 *
 * @param id the ID number to validate.
 * @return true if the ID number is valid, false otherwise.
 */
bool ValidateIsraeliId(const int id);

/**
 * @brief Compute the sum of the digits in a number.
 *
 * @param number the number to sum
 * @return int the sum of the digits in the number
 */
int SumOfDigits(int number);
