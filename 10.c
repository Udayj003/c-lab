#include <stdio.h>
#include <math.h>

int main() {
    float arr[100], sum = 0, mean, stddev = 0;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d real numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", arr + i);  // Using pointer notation
        sum += *(arr + i);
    }

    mean = sum / n;

    for (int i = 0; i < n; i++) {
        stddev += pow(*(arr + i) - mean, 2);
    }

    stddev = sqrt(stddev / n);

    printf("\nSum = %.2f", sum);
    printf("\nMean = %.2f", mean);
    printf("\nStandard Deviation = %.2f\n", stddev);

    return 0;
}
