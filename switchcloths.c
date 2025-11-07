#include <stdio.h>

int main() {
    int choice;

    printf("Select the type of cloth:\n");
    printf("1. formals\n");
    printf("2. college tshirt\n");
    printf("3. black tshirt\n");
    printf("4. holiday\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected formals.\n");
            break;
        case 2:
            printf("You selected college tshirt.\n");
            break;
        case 3:
            printf("You selected black tshirt .\n");
            break;
        case 4:
            printf("no uniform today is holiday.\n");
            break;
        default:
            printf("Invalid choice! Please select from 1 to 4.\n");
    }

    return 0;
}