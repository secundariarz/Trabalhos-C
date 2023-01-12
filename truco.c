#include <stdio.h>

int main() {
    float n , scan , n1, n2 , n3 , res;
    scanf("%f", &scan);

    for(n = 0 ; n < scan ; n++) {
       scanf("%f", &n1);
       scanf("%f", &n2);
       scanf("%f", &n3);

        res = (n1  * 2 + n2 * 3 + n3 * 5) / 10; 
        printf("%.2f" , res);
    }
}
