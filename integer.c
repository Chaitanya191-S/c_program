#include <stdio.h>
int main() {
int a;
printf("Enter a number: ");
scanf("%d", &a);
if(a>0)
printf("A is +ve");
else if(a=0)
printf("A is zero");
else
printf("A is -ve");
return 0;
}