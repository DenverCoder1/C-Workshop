#pragma once
#include <stdbool.h>

/// @file SearchEnvironment.h

/**
 * @brief Prints the environment variables starting with the given search term
 *          using the format:
 *
 * 'Environment variable "PROCESSOR_ARCHITECTURE" has the value "AMD64".'
 *
 * @param envp The environment variables.
 * @param search The text to search for.
 */
void SearchEnvironment(char *envp[], char *search);

/**
 * @brief Checks if a string starts with the text of search
 *
 * @param string The string to check.
 * @param search The text to search for.
 * @return true if the string starts with the text of search, false otherwise.
 */
bool StartsWith(char *string, char *search);
