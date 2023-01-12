#include <stdio.h>

int main() {
    int horas, sal , total;

    scanf("%d", &sal);
    scanf("%d", &horas);


    if(horas > 40) {
        total = sal + (sal * 0.50);
        printf("%d", total);
    } else {
        total = sal;
        printf("%d", total);
    }
    

}