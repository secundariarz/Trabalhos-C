int main() {
        float prod , lucro;
        scanf("%f", &prod);

        if(prod >= 50) {
        lucro = 0.15;
        printf("%f", (lucro * prod) + prod);
        } else {
        lucro = 0.20;
        printf("%f", (lucro * prod) + prod);   
        }
}