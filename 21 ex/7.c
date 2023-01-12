#include <stdio.h>

int main() {
    int v1 , v2 , total;

    scanf("%d", &v1);
    scanf("%d", &v2);

    total = (v1 + v2) / 2;

    if(total >= 6) {
        printf("%d", total);
        printf("APROVADO!");
    } else {
        printf("REPROVADO!");
    }
    

}