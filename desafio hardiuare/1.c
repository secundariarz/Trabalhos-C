#include <stdio.h>

int main() {
        int a , b , c , v;

        scanf("%d" , &a);
        scanf("%d" , &b);
        scanf("%d" , &c);

        if(a > b && a > c)  {
            printf("a é maior");
        } else if(b > a && b > c) {
            printf("b é maior");
        } else if(c > a && c > b) {
            printf("c é maior");
        } else if(c > b && c > a) {
            printf("c é maior");
        }
}