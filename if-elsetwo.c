#include <stdio.h>

int main() {
    float a;
    scanf("%f" , &a);

    if(a >= 0 && a < 25) {
        printf("ta na casa dos 0-25 truta");
    } else if(a > 25 && a < 50) {
        printf("ta na casa dos 25-50 truta");
    } else if(a > 50 && a < 75) {
        printf("ta na casa dos 50-75 truta");
    } else if(a > 75 && a < 100) {
        printf("ta na casa dos 75-100 truta");
    }

}