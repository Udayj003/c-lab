#include <stdio.h>

int main() {

    int i, j, k, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Top half
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = i; j < n; j++) {
            printf("\t");
        }

        // Increasing order
        for (k = 1; k <= i; k++) {
            printf("%d\t", k);
        }

        // Decreasing order
        for (k = i - 1; k >= 1; k--) {
            printf("%d\t", k);
        }

        printf("\n");
    }

    // Bottom half
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = n; j > i; j--) {
            printf("\t");
        }

        // Increasing order
        for (k = 1; k <= i; k++) {
            printf("%d\t", k);
        }

        // Decreasing order
        for (k = i - 1; k >= 1; k--) {
            printf("%d\t", k);
        }

        printf("\n");
    }

    return 0;
}
