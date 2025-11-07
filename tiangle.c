#include <stdio.h>

int main() {
    int angle1,angle2,angle3,sum;

    printf("Enter the angle1 : ");
        scanf("%d", &angle1);
    printf("Enter the angle2 : ");
        scanf("%d", &angle2);
    printf("Enter the angle3 : ");
        scanf("%d", &angle3);


    if ( angle1 + angle2 + angle3 == 180){

        printf("shape is triangle");
    } else {
       printf("shape is not triangle");
    }
    return 0;
}   
  
     


    
