#include<stdio.h>

int calculateAverage(int num1,int num2,int num3){
    return ((num1+num2+num3)/3);
}
    int  main(){
      int num1,num2,num3,average;

      printf("enter nuum1,num2,num3\n");
      scanf("%d %d %d",&num1,&num2,&num3);

          
      printf("the average of %d,%d and %d is %d\n\n",num1,num2,num3,(calculateAverage(num1, num2,num3)));
      
      return 0
      ;


}