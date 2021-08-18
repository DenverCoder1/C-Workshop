#include <stdio.h>
#include <stdbool.h>
#include "Transpose.h"

enum matrix_type TransposeMatrix(matrix_element **matrix, size_t size)
{
    bool isSymmetric = true;
    bool isSkewSymmetric = true;
    for (size_t row = 0; row < size; row++)
    {
        for (size_t col = row + 1; col < size; col++)
        {
            matrix_element *first = *(matrix + row) + col;
            matrix_element *second = *(matrix + col) + row;
            // swap matrix[row][col] and matrix[col][row]
            SwapElements(first, second);
            // check if matrix is still symmetric
            if (*first != *second)
            {
                isSymmetric = false;
            }
            // check if matrix is still skew symmetric
            if (*first != -(*second))
            {
                isSkewSymmetric = false;
            }
        }
    }
    // return the matrix type
    return isSymmetric ? SYMMETRIC : (isSkewSymmetric ? SKEW_SYMMETRIC : NONE);
}

void SwapElements(matrix_element *first, matrix_element *second)
{
    matrix_element temp = *first;
    *first = *second;
    *second = temp;
}

void PrintMatrix(matrix_element **matrix, size_t size)
{
    for (size_t row = 0; row < size; row++)
    {
        for (size_t col = 0; col < size; col++)
        {
            // print all cells with left padding defined in the header
            printf("%*.*lf ", CELL_WIDTH, CELL_PRECISION, matrix[row][col]);
        }
        printf("\n");
    }
}
