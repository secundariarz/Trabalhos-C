#include <stdio.h>

int main() {
    int a , b; 
    scanf("%d" , &b);

    for(a = 0; a <= 10; a++) {
        printf("%d" , b * a);
    }
}