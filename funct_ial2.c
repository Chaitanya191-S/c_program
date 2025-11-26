#include<stdio.h>

int factorial(int num){
    int i=1,j=1;
    for (i=num;i>=1;i--){
       j*=i;
    }
    printf("factorial of %d is %d",num,j);
}

int main (){
    int num ;
    printf("enter your number");
    scanf("%d",&num);
    factorial(num);

}