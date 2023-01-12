#include <stdio.h>

int main() {
        int i, vet[3] , a , y;

        for(i = 0; i < 3 ; i++) {
            scanf("%d", &vet[i]);
        }

        for(y = 0; y <= 3 ; y++) {
            for(int x = y; x < 3; x++) {
                if(vet[y] > vet[x]) {
                    a = vet[y];
                    vet[y] = vet[x];
                    vet[x] = a;
                }
            }
            
        }

        for(i = 0 ; i < 3 ; i++) {
            printf("%d", vet[i]);
        }
        
       


        

        


}