#include <stdio.h>

int main() {
    int i , n1 , n2;

    for(i = 0; i < 1 ; i++) {
         scanf("%d", &n1);
         scanf("%d", &n2);

         if(n2 == 0) {
            printf("divisao impossivel");
        } else {
            printf("%d", n1 / n2);
        }
    }
}