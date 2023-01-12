#include <stdio.h>

int main() {
    int n , i = 0 , res = 0 , total;

    while(n > 0) {
        scanf("%d", &n); 
        res = res + n;
        
        if(n == 0) {
            printf("%d resul do i =", res);

            printf("%d", total);
           
        }
        i++;
        total = res / i;
    }
}