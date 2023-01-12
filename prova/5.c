int main() {
        float prod , lucro , luc1 , newValue , n1;
        int i = 0;
        



    while (prod > 0) {
       
        scanf("%f", &prod);
         i++;
        if(prod <= 20) {
            lucro = 0.17;
            luc1 = lucro * prod;
            printf("%.2f", luc1 + prod);
        } else if(prod >= 21 && prod <= 70) {
            lucro = 0.15;
            printf("%.2f", (lucro * prod) + prod);

        } else if(prod > 70 && prod <= 100){
            lucro = 0.12;
            printf("%.2f", (lucro * prod) + prod);

        }

        
    }
        printf("a quantidade de produtos e %d", i);

    }
    
        
        