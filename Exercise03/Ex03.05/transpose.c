#include <stdio.h>
#include "transpose.h"

void TransposeMatrix(matrix_element **matrix, size_t size)
{
    for (size_t row = 0; row < size; row++)
    {
        for (size_t col = row + 1; col < size; col++)
        {
            // swap matrix[row][col] and matrix[col][row]
            SwapElements(*(matrix + row) + col, *(matrix + col) + row);
        }
    }
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
