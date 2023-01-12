#include <stdio.h>

int main() {
    float sapo , rato , coelho , i , teste , total, percentual;

    scanf("%f" , &teste);
    
    for(i = 0 ; i < teste; i++) {
        scanf("%f" , &sapo);       
        scanf("%f" , &rato);
        scanf("%f" , &coelho);

    }

    total = sapo + rato + coelho;

    printf("total de cobaias: %.2f", total);
    printf("total de coelhos: %.2f", coelho);
    printf("total de ratos: %.2f", rato);
    printf("total de sapos: %.2f", sapo);
    printf("percentual de coelhos: %.2f", (coelho / total) * 100);
    printf("percentual de ratos: %.2f", (rato / total) * 100);
    printf("percentual de sapos: %.2f", (sapo / total) * 100);
}