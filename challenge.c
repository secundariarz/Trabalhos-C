#include <stdio.h>

int main() {
    int a;

    for(int i = 0 ; i < 5; i++) {
        scanf("%d" , &a);
        
        if(a % 2 == 0) {
            printf("%d PAR:" , a);
        }

        if(a % 2 == 1) {
            printf("%d IMPAR:" , a);
        }

        if(a < 0) {
            printf("%d negativos", a);
        }

        if(a > 0) {
            printf("%d positivos", a);
        }
    }

    // if(a || b || c || d || e % 2 == 0) {
        
    // }
}