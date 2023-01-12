#include <stdio.h>

int main() {
    char a[20] , b[20], c[20] , ave[] = "ave" , carn[] = "carnivoro" , vert[] = "vertebrado";

    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);

    if((strcmp(a, vert)) == 0) {
        if((strcmp(b, ave)) == 0) {
            if((strcmp(c , carn)) == 0) {
                printf("aguia");
            }
        }
    }
    
}