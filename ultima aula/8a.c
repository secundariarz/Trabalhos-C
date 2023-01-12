#include <stdio.h>

int main() {
        char name[20] , name2[20];

        scanf("%s", &name[20]);
        scanf("%s", &name2[20]);

        if((strcmp(name, name2)) != 0) {
            printf("Nome iguais");
        } else {
            printf("Nome diferente");
        }

}