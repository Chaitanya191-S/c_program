#include <stdio.h>

int main() {
    int i,number;

    printf("enter a number:\n");
    scanf("%d",&number);

    for(i = 1; i <= number; i++) {
        if(i % 4 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
    
}