int main() {
    float prod, calcluc , calcfin, lucro;
    scanf("%f", &prod);
    scanf("%f", &lucro);

    calcluc = lucro / 100;
    calcfin = (calcluc * prod) + prod;


    printf("%.2f", prod);
    printf("\n %.2f", lucro);
    printf("\n %.2f", calcfin);



    



}