#pragma once
#include <stdio.h>

/**
 * @file StringLength.h
 */

 /**
  * @brief Returns the length of the given
  * null-terminated byte string, that is,
  * the number of characters that precede
  * the terminating null character.
  *
  * @param input The string to be measured
  * @return size_t The length of the string
  */
size_t StringLength(const char *input);
