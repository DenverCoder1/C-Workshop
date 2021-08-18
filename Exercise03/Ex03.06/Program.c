#include <stdio.h>
#include <malloc.h>
#include "Transpose.h"

int main()
{
    // read in the size of the matrix
    size_t size;
    printf("Enter the size of the matrix: ");
    scanf("%zu", &size);

    // Allocate memory for the matrix
    matrix_element **matrix = (matrix_element **) malloc(size * sizeof(matrix_element *));
    for (size_t row = 0; row < size; row++)
    {
        // Allocate memory for the row
        matrix[row] = (matrix_element *) malloc(size * sizeof(matrix_element));
        // Fill the row of the matrix with its overall index
        for (size_t col = 0; col < size; col++)
        {
            *(*(matrix + row) + col) = row * size + col;
        }
    }

    // Print the original matrix
    printf("Original matrix:\n");
    PrintMatrix(matrix, size);

    // Transpose the matrix
    enum matrix_type type = TransposeMatrix(matrix, size);

    // Print the type of matrix
    printf(
        "\nType of matrix: %s\n",
        type == SYMMETRIC
        ? "Symmetric"
        : (type == SKEW_SYMMETRIC
            ? "Skew-Symmetric"
            : "Neither Symmetric nor Skew-Symmetric")
    );

    // Print the transposed matrix
    printf("\nTransposed matrix:\n");
    PrintMatrix(matrix, size);

    return 0;
}
