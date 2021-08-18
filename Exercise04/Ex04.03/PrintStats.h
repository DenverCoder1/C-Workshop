#pragma once
#include <stdbool.h>

/// @file PrintStats.h


/**
 * @brief Prints statistics about command line arguments:
 *
 * - A list of all the parameters.
 * - The number of parameters.
 * - How many switches
 * - How many of the parameters are upper-case (the whole parameter), lower-case, and none of the above.
 *
 * @param argc Number of command line arguments.
 * @param argv Command line arguments.
 */
void PrintStats(int argc, char *argv[]);

/**
 * @brief Check if the current parameter is a switch
 *
 * @param arg The current parameter.
 *
 * @return true if the current parameter is a switch, false otherwise.
 */
bool IsSwitch(const char *arg);

/**
 * @brief Checks if a string is contained in a specifed range.
 *
 * @param arg The string to check.
 * @param start Lower bound of the range.
 * @param end Upper bound of the range.
 *
 * @return true if the string is contained in the range, false otherwise.
 */
bool StringInRange(const char *arg, char start, char end);

/**
 * @brief Check if the current parameter is an uppercase parameter.
 *
 * @param arg The current parameter.
 *
 * @return true if the current parameter is an uppercase parameter, false otherwise.
 */
bool IsUpperCase(const char *arg);

/**
 * @brief Check if the current parameter is a lowercase parameter.
 *
 * @param arg The current parameter.
 *
 * @return true if the current parameter is a lowercase parameter, false otherwise.
 */
bool IsLowerCase(const char *arg);
