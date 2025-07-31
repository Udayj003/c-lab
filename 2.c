#include <stdio.h>

int main() {

    int customer_number, units;

    float charges = 20.0, total_amount = 0.0, surcharge = 0.0;

    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter customer number: ");
    scanf("%d", &customer_number);

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    if (units <= 200) {
        charges = units * 0.8;
    } else if (units <= 300) {
        charges = ((units - 200) * 0.9) + (200 * 0.8);
    } else {
        charges = ((units - 300) * 1.0) + (100 * 0.9) + (200 * 0.8);
    }

    total_amount = charges;

    if (total_amount > 400) {
        surcharge = total_amount * 0.15;
        total_amount += surcharge;
    }

    total_amount += 100; // minimum meter charge

    printf("User name: %s\n", name);
    printf("User ID: %d\n", customer_number);
    printf("Units consumed: %d\n", units);
    printf("Electricity Bill: Rs. %.2f\n", total_amount);

    return 0;
}
