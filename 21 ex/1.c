#include <stdio.h>

int main() {
    float branco, nulo, val, t , b , n , v ;

    scanf("%f", &branco);
    scanf("%f", &nulo);
    scanf("%f", &val);

    t = branco + nulo + val;
    
    b = t / branco * 100;
    n = t / nulo * 100;
    v = t / val * 100;
   

    printf("%f" , b);
    printf("\n%f" , n);
    printf("\n%f" , v);



}