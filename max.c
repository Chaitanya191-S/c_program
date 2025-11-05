#include<stdio.h>

void main(){
    int num1,num2;
    printf("Enter 2 no. : ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    printf("%d is > then %d",num1,num2);
    else
    printf("%d > %d",num2,num1);
        
}