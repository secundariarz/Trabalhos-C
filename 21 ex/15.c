#include <stdio.h>

int main() {
    int a;

    for(int i = 0 ; i < 5; i++) {
        scanf("%d" , &a);

        if(a % 2 == 0) {
            printf("%d", a);
        }
    }

}