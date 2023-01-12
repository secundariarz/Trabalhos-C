#include <stdio.h>

int main() {
    int a;

    for(a = 0; a <= 9999; a++) {
        if(a % 7 == 0) {
        printf("\n %d" , a);
       }
    }
}