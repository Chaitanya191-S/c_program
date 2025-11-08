#include <stdio.h>

int main() {
    float mass, acceleration, force;

    printf("Enter mass : ");
    scanf("%f", &mass);

    printf("Enter acceleration : ");
    scanf("%f", &acceleration);

    force = mass * acceleration;

    printf("Force = %.2f Newton\n", force);

    return 0;
}
//mass in kilogram
//speed in m/s*s