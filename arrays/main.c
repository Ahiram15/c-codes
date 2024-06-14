#include <stdio.h>
// #include <calcn.h>

void read(int matrix[10][10], int rows, int cols);
void display(int matrix[10][10], int rows, int cols);
void addition(int matrix1[10][10], int matrix2[10][10], int rows, int cols);
void subtraction(int matrix1[10][10], int matrix2[10][10], int rows, int cols);
void multiplication(int matrix1[10][10], int matrix2[10][10], int rows1, int cols1, int cols2);
void transpose(int matrix[10][10], int rows, int cols);

void main() {
    int a[10][10], b[10][10]; 
    int m, n, p, q;

    printf("Enter the size of the first matrix: ");
    scanf("%d %d", &m, &n);
    read(a, m, n);

    printf("Enter the size of the second matrix: ");
    scanf("%d %d", &p, &q);
    read(b, p, q);

    printf("The first matrix is:\n");
    display(a, m, n);

    printf("The second matrix is:\n");
    display(b, p, q);

    if (m == p && n == q) {
        addition(a, b, m, n);
    } else {
        printf("Addition is not possible\n");
    }

    if (m == p && n == q) {
        subtraction(a, b, m, n);
    } else {
        printf("Subtraction is not possible\n");
    }

    if (n == p) {
        multiplication(a, b, m, n, q);
    } else {
        printf("Multiplication is not possible\n");
    }

    // Transpose of a matrix
    printf("The transpose of the first matrix is:\n");
    transpose(a, m, n);
    printf("The transpose of the second matrix is:\n");
    transpose(b, p, q);
    


}


