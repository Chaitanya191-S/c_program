#include <stdio.h>

int main() {
    int angle1,angle2,angle3,angle4,sum;

    printf("Enter the angle1 : ");
        scanf("%d", &angle1);
    printf("Enter the angle2 : ");
        scanf("%d", &angle2);
    printf("Enter the angle3 : ");
        scanf("%d", &angle3);
     printf("Enter the angle4 : ");
        scanf("%d", &angle4);

    
    


    if ( angle1 + angle2 + angle3 + angle4  == 360){

        printf("shape is square");
    } else {
       printf("shape is not square");
    }
    return 0;
}   
  
     