#include <stdio.h>

int main() {
    float n1=2 , n2=3 , n3=4 , n4=1 , res , resExa;
    double nExa;

    res = (n1 + n2 + n3 + n4) / 4;

    printf("Média: %f", res);

    if(res >= 7) {
        printf("Aluno aprovado");
    } else {
        if(res >= 5 && res <= 6) {
            printf("Aluno em exame");
            scanf("Nota do exame: %lf", nExa);
            resExa = (res + nExa) / 2;
            if(resExa >= 5) {
                printf("aluno aprovado");
                printf("%f" , resExa);
            } else {
                printf("aluno reprovado");
                printf("%f" , resExa);
            }
        } else {
            printf("Aluno reprovado");
        }


    }





}