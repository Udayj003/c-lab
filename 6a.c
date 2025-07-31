#include <stdio.h>
#include <math.h>
#define M_PI 3.1416
int main() {
    double x, radians, term, sinx = 0;
    int i, n, sign = 1, fact, power;

    printf("Enter the value of x in degrees: ");
    scanf("%lf", &x);

    radians = x * M_PI / 180.0; // Convert degrees to radians

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        power = 2 * i + 1;
        fact = 1;

        for (int j = 1; j <= power; j++) {
            fact *= j;
        }

        term = sign * pow(radians, power) / fact;
        sinx += term;
        sign *= -1;
    }

    printf("Using Taylor Series: sin(%.2f) = %.10lf\n", x, sinx);
    printf("Using math.h       : sin(%.2f) = %.10lf\n", x, sin(radians));

    return 0;
}
