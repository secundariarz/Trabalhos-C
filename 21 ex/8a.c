#include <stdio.h>

int main() {
    int atual , nascimento;

    scanf("%d", &atual);
    scanf("%d", &nascimento);

    if(atual - nascimento < 16) {
        printf("não pode votar");
    } else {
        printf("pode votar");
    }
}