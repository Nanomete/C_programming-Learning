#include <stdio.h>

int main() {
    const float pi = 22.0 / 7.0;
    float r;

    printf("Please input r : ");
    scanf("%f", &r);

    float Area = 4.0 * pi * r * r;
    float Volume = 4.0 / 3.0 * pi * r * r * r;

    printf("The surface area of sphere is %.2f\n", Area);
    printf("The volume of sphere is %.2f\n", Volume);

    return 0;
}