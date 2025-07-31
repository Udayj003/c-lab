#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float r1, r2;
    float discriminant;

    printf("Enter the values of a, b, c of ax^2 + bx + c = 0:\n");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant == 0) {
        r1 = -b / (2.0 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", r1, r1);
    }
    else if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2.0 * a);
        r2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Roots are real and unequal: %.2f and %.2f\n", r1, r2);
    }
    else {
        float realPart = -b / (2.0 * a);
        float imagPart = sqrt(-discriminant) / (2.0 * a);
        printf("Roots are imaginary: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
