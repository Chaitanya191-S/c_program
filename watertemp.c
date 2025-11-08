#include <stdio.h>

int main() {
    int temp;   
     
        printf("\nEnter Water Temperature : ");
        scanf("%d", &temp);

        if(temp < 25) {
            printf("Water is COLD.\n");
        }
        else if(temp >= 25 && temp <= 60) {
            printf("Water is warm.\n");
        }
        else {
            printf("Water is HOT.\n");
        }

    return 0;
}