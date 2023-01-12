#include <stdio.h>

int main() {
    int i , senha;

   

    while (senha != 2002)
    {
         scanf("%d", &senha);

        if(senha == 2002) {
            printf("senha correta");
        } else {
            printf("senha incorreta tente novamente \n");
        }
    }
    

    // for(i =0; i < senha; i++) {
        
    // }


}