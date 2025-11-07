#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You can play Cricket, Footbal.\n");
    }
    else if(age >= 13) {
        printf("You can play Badminton, Volleyball.\n");
    }
    else {
        printf("You can play Hide and Seek and Carrom.\n");
    }
    
    return 0;
}