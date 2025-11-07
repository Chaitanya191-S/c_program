#include <stdio.h>

int main() {
    int angle;

    printf("Enter the angle: ");
    scanf("%d", &angle);

    switch (angle > 0) { 
        case 1:
            if (angle < 90)
                printf("It is an Acute Angle.\n");
            else if (angle == 90)
                printf("It is a Right Angle.\n");
            else if (angle > 90 && angle < 180)
                printf("It is an Obtuse Angle.\n");
            else
                printf("not an angle.\n");
            break;

        default:
            printf("wrong info.\n");
    }

    return 0;
}