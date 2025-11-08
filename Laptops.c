#include <stdio.h>

int main() {
    int laptops, students;

    printf("Enter number of laptops in the lab: ");
    scanf("%d", &laptops);

    printf("Enter number of students: ");
    scanf("%d", &students);

    if (students <= laptops) {
        printf("All students can use a laptops.\n");
    } else {
        printf("Not enough laptops, not all student get laptops.");
    }

    return 0;
}
