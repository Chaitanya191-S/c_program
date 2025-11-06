#include <stdio.h>

int main() {

    int day;
    printf("enter a day sequence");
    scanf("%d", &day);
    

    switch (day) { 
        case 1:
            printf("It's Monday.\n");
            break; 
        case 2:
            printf("It's Tuesday.\n");
            break;
        case 3:
            printf("It's Wednesday.\n");
            break;
        case 4:
            printf("It's Thursday.\n");
            break;
        case 5:
            printf("It's Friday.\n");
            break;
        default: 
            printf("It's the weekend!\n");
            break;
    }

    return 0;
}