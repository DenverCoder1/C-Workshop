#pragma once

/// @file PrintEnvironment.h

/**
 * @brief Prints the environment variables using the format:
 *
 * 'Environment variable "PROCESSOR_ARCHITECTURE" has the value "AMD64".'
 *
 * @param envp The environment variables.
 */
void PrintEnvironment(char *envp[]);
