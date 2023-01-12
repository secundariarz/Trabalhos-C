#include <stdio.h>

int main(){

    float n1, n2, n3, n4, m;

        printf("Digite sua primeira nota: ");
        scanf("%f", &n1);

        printf("Digite sua segunda nota: ");
        scanf("%f", &n2);

        printf("Digite sua terceira nota: ");
        scanf("%f", &n3);

        printf("Digite sua quarta nota: ");
        scanf("%f", &n4);

        m = (n1 + n2 + n3 + n4) / 4;

            if(m > 7.0)
                printf("Aluno aprovado");
            else

            if(m < 5.0)
                printf("Aluno reprovado");
            else

            if(m == 5.0 >= 6.9)
                printf("Aluno em exame");
            



}