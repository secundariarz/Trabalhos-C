#include <stdio.h>

int main() {
    char name[10] ;
    int sell , total , res;
    scanf("%d", &sell);
    scanf("%d", &total);
    
    res = total* 0.15 + sell;
    printf("%d", res);
}
