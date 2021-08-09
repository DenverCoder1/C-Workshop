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
 * @return the character read
 */
char ReadCharacter();

/**
 * @brief Print a character to the user in uppercase
 *
 * @param input the character to print
 */
void PrintUpperCase(char input);

/**
 * @brief Check if a character is a 'Q' or 'q'
 *
 * @param input character to check
 * @return true if the character is a 'Q' or 'q'
 * @return false if the character is not a 'Q' or 'q'
 */
bool IsQ(char input);
