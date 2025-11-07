#include<stdio.h>
int main(){
    char ch;
    printf("enter any alphabet:");
    scanf("%c",&ch);

    if(ch>'A'&&ch<'Z'){
        printf("%c is an uppercase alphabet\n\n",ch);
    }
    else if(ch>='a'&&ch<='z'){

        printf("%c is a lowercase alphabet\n\n",ch);
    }
    else{
        printf("%c is not an alphabet\n\n",ch);
    }
    return 0;
}