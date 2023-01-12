#include <stdio.h>

int main(){

    double a;

    printf("Qual e o seu salario: ");
    scanf("%lf", &a);

    if(a <= 1903.98)
        printf("Isento");
    else

    if(a >= 1903.99 && a <= 2826.65) 
        printf("Voce vai pagar: R$%.2lf", a * (7.5/100));
    else

    if(a >= 2826.66 && a <= 3751.05)
        printf("Voce vai pagar: R$%.2lf", a * 0.15);
    else

    if(a >= 3751.06 && a <= 4664.68)
        printf("Voce vai pagar: R$%.2lf", a * (22.5/100));
    else

    if(a >= 4664.68)
        printf("Voce vai pagar: R$%.2lf", a * (27.5/100));

}