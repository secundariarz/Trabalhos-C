#include <stdio.h>

int main() {
    int p1, n1 , vu1, p2, n2 , vu2 , res1 , res2;
    scanf("%d" , &p1);
    scanf("%d" , &n1);
    scanf("%d" , &vu1);

    res1 = n1 * vu1;

    scanf("%d" , &p2);
    scanf("%d" , &n2);
    scanf("%d" , &vu2);

    res2 = n2 * vu2;


    printf("%d" , res1 + res2);

}