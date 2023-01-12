#include <stdio.h>

int main() {
    int a , b , soma , sub , div , mult;

    printf("digita o 1 numero ai: ");
    scanf("%d", &a);

    printf("digita o 2 numero ai: ");
    scanf("%d", &b);

    soma = a+b;
    sub = a - b;
    div = a / b;
    mult = a * b;

    printf("\n o resultado é %d" , soma);
    printf("\n o resultado é %d" , sub);
    printf("\n o resultado é %d" , div);
    printf("\n o resultado é %d" , mult);
}