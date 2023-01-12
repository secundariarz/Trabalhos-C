int main() {
        float prod , lucro , luc1;
        scanf("%f", &prod);

        if(prod <= 20) {
            lucro = 0.17;
            luc1 = lucro * prod;
            printf("%.2f", luc1 + prod);
        } else if(prod >= 21 && prod <= 70) {
            lucro = 0.15;
            printf("%.2f", (lucro * prod) + prod);
        } else {
            lucro = 0.12;
            printf("%.2f", (lucro * prod) + prod);
        }
}