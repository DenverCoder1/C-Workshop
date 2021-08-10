#pragma once
#include <stdbool.h>

/**
 * @file Input Loop
 */

 /**
  * @brief Function that receives character input
  * from the user and prints it. The function
  * terminates when the input is 'Q' or 'q'
  */
void InputLoop();

/**
 * @brief Read a character from the user
 *
 * @return char The character read
 */
char ReadCharacter();

/**
 * @brief Print a character to the user
 *
 * @param input The character to print
 */
void PrintCharacter(char input);

/**
 * @brief Check if a character is a 'Q' or 'q'
 *
 * @param input Character to check
 * @return true if the character is a 'Q' or 'q', false otherwise
 */
bool IsQ(char input);
