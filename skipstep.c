#include <stdio.h>

int main() {
    int i,number;
    printf("please enter a number:");
    scanf("%d",&number);
    for (i = 0; i <= number; i = i + 2) {
    printf("%d ", i);
}
    printf("\n");

return 0;
}