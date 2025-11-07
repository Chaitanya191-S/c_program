#include <stdio.h>

int main(){
    int n, i;
    long long product=1;

    printf("how many odd numbers you want calculate: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2)  
    {
        product = product * i;
    }

    printf("Multiplication of first %d odd numbers is: %lld\n", n, product);

    return 0;
}