#include <stdio.h>

int main() {
    float radius, height, volume;


    printf("Enter Radius of Cylinder: ");
    scanf("%f", &radius);

    printf("Enter Height of Cylinder: ");
    scanf("%f", &height);

    volume = 3.14 * radius * radius * height;

    printf("Volume of Cylinder = %.2f\n", volume);

    return 0;
}
//3.14=value of pi 
