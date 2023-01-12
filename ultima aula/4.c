#include <stdio.h>

int main() {
        int a, i , cont = 0 , contNul = 0;

        for(i = 0; i < 10; i++) {
            scanf("%d", &a);

            
                if(a >= 10 && a <= 50) {
                    cont++;             
            } else {
                contNul++;    
            }
        }
            printf("%d estes valores estao no intervalo: ", cont);
            printf("%d nao esta no intervalo", contNul) ;
        

        


}