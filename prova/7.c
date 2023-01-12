#include <stdio.h>

int main() {
    float pr1 , pr2 , media , media2;
    int i;

    
    for(i = 0; i < 20; i++) {
        scanf("%f \n pr1 ", &pr1);
        scanf("%f \n pr2 ", &pr2);

        // printf("\n %.2f", pr1);
        // printf("\n %.2f", pr2);
        media = media + pr1;
        media2 = media2 + pr2;

        printf("%f", media / 2);
        printf("\n %f", media2 / 2);
    } 

    
}