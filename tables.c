#include <stdio.h>

int main() 
{
    int number, i = 1;   

    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &number);

    printf("\nMultiplication Table of %d\n", number);
    printf("--------------------------\n");

    
    do
    {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;   
    }
    while(i <= 10);   

    printf("\nTable printed successfully!\n");

    return 0;

}