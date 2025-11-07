#include <stdio.h>

int main() {
    int number;
    printf("please enter a number");
    scanf("%D",number);

    for(int i = 1; i <= number; i++) {
        for(int i = 1; i <= 5; i++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}