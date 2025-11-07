#include <stdio.h>

int main() {
    float radius, circumference ;

    printf("Enter the radius of circle: ");
        scanf("%f", &radius);

    circumference= 2*3.14*radius;

    
       printf("The circumference of circle is: %.2f\n", circumference);

    return 0;
}