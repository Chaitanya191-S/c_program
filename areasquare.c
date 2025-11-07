#include <stdio.h>

int main() {
    float length, area;

    printf("Enter the length of one side of square: ");
        scanf("%f", &length);


    
    area = length * length;

    
       printf("The area of the square is: %.2f\n", area);

    return 0;
}