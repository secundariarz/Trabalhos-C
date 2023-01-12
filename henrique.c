#include <stdio.h>

int main()
{
    int cent, cent25 = 25, cent10 = 10, cent5 = 5, cent1 = 1;
    scanf("%d", &cent);

    while (cent > 25)
    {
        cent - 25 ;
        printf("\n %d", cent25);
    }
    while (cent > 10)
    {
        cent - 10;
        printf("\n %d", cent10);
    }
    while (cent > 5)
    {

        cent - 5;
        printf("\n %d", cent5);
    }
    while (cent > 1)
    {
        cent - 1;
        printf("\n %d", cent1);
    }
}