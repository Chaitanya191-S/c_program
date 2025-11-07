#include <stdio.h>

int main() {
    float marks;

    printf("Enter your percentage: ");
    scanf("%f", &marks);

    if (marks >= 65)
        printf("You will get admission in coding club .\n");
    else
        printf("You will not get admission coding club.\n");

    return 0;
}