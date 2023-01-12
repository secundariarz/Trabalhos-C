#include <stdio.h>

int main() {
    int num , saldo , debito , credito , total;

    scanf("%d", &num);
    scanf("%d", &saldo);
    scanf("%d", &debito);
    scanf("%d", &credito);

    total = saldo - debito + credito;

    if(total >= 0) {
        printf("saldo positivo");
    } else {
        printf("saldo negativo");
    }



}