#include <stdio.h>

int main() {

    int r1, c1, r2, c2;
    int matrix1[10][10], matrix2[10][10], result[10][10];

    // Input dimensions of the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions of the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Validate matrix multiplication rules
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        printf("Number of columns in the first matrix must equal the number of rows in the second matrix.\n");
        return 1;
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize result matrix and perform multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Resultant Matrix (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
