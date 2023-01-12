#include <stdio.h>

int main() {
    int a ,i ,res ;

    for(i = 0; i < 5; i++) {
        scanf("%d", &a);
        res = res + a / 5;
    }

    printf("%d", res);
}


//Calcular a média de idade de uma turma qualquer.