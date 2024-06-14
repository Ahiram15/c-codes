#include <stdio.h>

// Function to read a matrix from input
void read(int matrix[10][10], int rows, int cols) {
    printf("Enter %d elements:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void display(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices and display the result
void addition(int matrix1[10][10], int matrix2[10][10], int rows, int cols) {
    int result[10][10];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("The addition of matrix is:\n");
    display(result, rows, cols);
}

// Function to subtract two matrices and display the result
void subtraction(int matrix1[10][10], int matrix2[10][10], int rows, int cols) {
    int result[10][10];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("The subtraction of matrix is:\n");
    display(result, rows, cols);
}

// Function to multiply two matrices and display the result
void multiplication(int matrix1[10][10], int matrix2[10][10], int rows1, int cols1, int cols2) {
    int result[10][10];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("The multiplication of matrix is:\n");
    display(result, rows1, cols2);
}

// Function to transpose a matrix and display the result
void transpose(int matrix[10][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

}