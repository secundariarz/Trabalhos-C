#include <stdio.h>

int main() {
    int estAtual, estMax , media;

    scanf("%d", &estAtual);
    scanf("%d", &estMax);

    media = (estMax + estAtual) / 2;

    if(estAtual >= media) {
        printf("nao efetuar a compra");
    } else {
        printf("efetuar");
    }


}