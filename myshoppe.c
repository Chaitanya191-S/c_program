#include <stdio.h>

int main() {
    float weight, rate, amount;

    printf("How many grams you purchase: ");
    scanf("%f", &weight);

    printf("Enter rate per gram: ");
    scanf("%f", &rate);

    amount = weight * rate;

    printf("Total Amount = %.2f\n", amount);

    return 0;
}
//weight must be in grams.....
