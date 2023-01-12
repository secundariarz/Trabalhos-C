#include <stdio.h>

int main() {
    int n1;

    printf("Digite 1 ou 0 para começar a bagunça");
    scanf("%d", &n1);

    if(n1 != 1 || 0) {
        return n1;
    } else {
        printf("%d", n1);
    }

}