#include <stdio.h>

const int MAX_SIZE = 100; // You can adjust the maximum size of the matrix if needed

void replaceAboveDiagonalWithZeros(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i > j) {
                matrix[i][j] = 0; // Replace elements above the main diagonal with zeros
            }
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    // Input matrix size
    printf("Enter the size of the square matrix: ");
    scanf_s("%d", &size);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf_s("%d", &matrix[i][j]);
        }
    }

    // Replace above diagonal with zeros
    replaceAboveDiagonalWithZeros(matrix, size);

    // Print the modified matrix
    printf("Matrix after replacing elements above the main diagonal with zeros:\n");
    printMatrix(matrix, size);

    return 0;
}