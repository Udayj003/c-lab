#include <stdio.h>
#include <math.h>
#define M_PI 3.1416

int main() {
    double x, radians, term, cosx = 0;
    int i, n, sign = 1, fact, power;

    printf("Enter the value of x in degrees: ");
    scanf("%lf", &x);

    radians = x * M_PI / 180.0; // Convert degrees to radians

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        power = 2 * i;
        fact = 1;

        for (int j = 1; j <= power; j++) {
            fact *= j;
        }

        term = sign * pow(radians, power) / fact;
        cosx += term;
        sign *= -1;
    }

    printf("Using Taylor Series: cos(%.2f) = %.10lf\n", x, cosx);
    printf("Using math.h       : cos(%.2f) = %.10lf\n", x, cos(radians));

    return 0;
}
