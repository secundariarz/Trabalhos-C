#include <stdio.h>

int main() {
    float maca , quantMaca;

    scanf("%f", &quantMaca);

    if(quantMaca < 12) {
        maca = 1.30;
    } else {
        maca = 1.00;
    }

    printf("%f", maca);
}