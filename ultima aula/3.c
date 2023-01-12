#include <stdio.h>

int main() {
        int i, cont = 0 , sum = 0 , med = 0;

        for(i = 13; i <= 73; i++) 
        {
            if(i % 2 == 0 ) {
                sum = sum + i;
                cont++;
                
            }
        }

        med = sum / cont;

        printf("%d", med);
}


//alcular e mostrar a média aritmética dos números pares compreendidos entre 13 e 73.