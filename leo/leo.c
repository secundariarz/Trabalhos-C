#include <stdio.h>

int main(){

  float a, b, c, tr, cr, at, aq, ar;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Qual o valor de C: ");
    scanf("%f", &c);

    tr = (a * b) / 2;

    printf("A area do tringulo retangulo e = %.2f", tr);

    cr = 3.14159 * c *c;
    printf("\nA area do curculo e = %.2f", cr);

    at = ((a + b) * c ) /2;
    printf("\nA area do trapezio e = %.2f", at);

    aq = b * b;
    printf("\nA area do quadrado e = %.2f", aq);

    ar = a  * b;
    printf("\nA area do retangulo e = %.2f", ar);  

}