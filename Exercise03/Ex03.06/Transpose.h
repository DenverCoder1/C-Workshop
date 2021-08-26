#include <stdio.h>
#define CELL_WIDTH      3
#define CELL_PRECISION  0

/// @file Transpose.h

/// Type definition for a numeric matrix element
typedef double matrix_element;

/// enum for matrix types
enum matrix_type
{
    NONE, SYMMETRIC, SKEW_SYMMETRIC
};

/**
 * @brief Recieves a square matrix and transposes it in place
 *
 * @param matrix The matrix to transpose
 * @param size The size of the matrix (rows and columns)
 *
 * @return corresponding value from the enum matrix_type
 *              describing whether it is symmetric, skew-symmetric, or neither
 */
enum matrix_type TransposeMatrix(matrix_element **matrix, size_t size);

/**
 * @brief Swaps two matrix elements
 *
 * @param first The first element
 * @param second The element to swap with
 */
void SwapElements(matrix_element *first, matrix_element *second);

/**
 * @brief Prints a square matrix
 *
 * @param matrix Matrix to print
 * @param size Size of the matrix (rows and columns)
 */
void PrintMatrix(matrix_element **matrix, size_t size);
