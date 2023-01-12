#include <stdio.h>



//Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se
//que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que
//ultrapassar este valor, calcular e escrever o seu salário total.
int main() {
    int sal , vendas , total , com;

    scanf("%d", &sal);
    scanf("%d", &vendas);

    
    if(vendas < 1.500) {
        total = sal + (sal * 0.03);
    } else {
        com = vendas - 1.500;
        total = sal + (1500 * 0.03) + com * 0.05;
        printf("%d", total);
    }

    // if(total > 1500) {
    //     total = sal + (sal * 0.5);
    //     printf("%d" , total);
    // } else {
    //     total = sal + (sal * 0.3);
    //     printf("%d" , total);
    // }

}