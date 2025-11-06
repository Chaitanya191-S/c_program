#include <stdio.h>

int main() {
    int marks;
    int result;

    printf("Enter student marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 35)
        result = 1;  
    else
        result = 0; 

    switch(result) {
        case 1:
            printf("Result: PASS\n");
            break;

        case 0:
            printf("Result: FAIL\n");
            break;

        default:
            printf("Invalid Input\n");
    }
    
    return 0;
}