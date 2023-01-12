// 2) Armazenar em Vetores, Nomes e Notas PR1 e PR2 de 6 alunos.
// Calcular a média de cada aluno e imprimir aprovado se a méida for
// maior que 5 e reprovado se média for menor ou igual a 5. OBS.: 2
// vetores para as notas tipo float. 1 vetor para os nomes. 1 vetor 
// para a média. 1 vetor para situação 

int main() {
    float pr1 , pr2 , media, media2;
    char nome[10];
    int sit, i;

    for(i = 0; i < 6 ; i++) {
        scanf("%f \n pr1 ", &pr1);
        scanf("%f \n pr2 ", &pr2);

        // printf("\n %.2f", pr1);
        // printf("\n %.2f", pr2);
        media = media + pr1;
        media2 = media2 + pr2;
    }

    printf("%f", media / 2);
    printf("\n %f", media2 / 2);

        

}