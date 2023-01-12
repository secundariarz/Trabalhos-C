#include <stdio.h>

int main() {
    int numCar, valTotal, sal , comissao , cal , res;

    scanf("%d", &numCar);
    scanf("%d", &valTotal);
    scanf("%d", &sal);
    scanf("%d", &comissao);

    cal = valTotal * 0.5;
    res = sal + comissao + cal;

    printf("%d", res);



}