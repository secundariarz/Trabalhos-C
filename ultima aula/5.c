//Escreva um programa que gera números entre 1000 e 1999 e mostra aqueles que divididos por 11
// dão resto 5.

#include <stdio.h>

int main() {
    int a , i;

    for(i = 1000; i <= 1999; i++) {
        if(i % 11 == 5) {
            printf("%d" , i);
        }
    }
}