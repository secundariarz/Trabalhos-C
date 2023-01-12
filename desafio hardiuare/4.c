#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);

    for(int i = 2; i < a; i++) {
        if(a % i == 0) {
            printf("é primo %d", a);
    } else {
            printf("n é %d", a);
    }
    }

    
}