#include <stdio.h>

int main() {
    int val;

    scanf("%d", &val);

    if(val >= 10) {
        printf("é maior");
    } else if(val <= 10) {
        printf("é menor");
    }

}