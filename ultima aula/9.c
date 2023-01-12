#include <stdio.h>

int main() {
        int a , b;

        scanf("%d", &a);
        scanf("%d", &b);

        if(a > b) {
            printf("A é maior");
        }

        if(b > a) {
            printf("B é maior");
        }

        if(b == a ) {
            printf("São iguais");
        }
}