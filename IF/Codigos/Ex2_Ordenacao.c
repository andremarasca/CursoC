#include <stdio.h>

int main (void)
{
    double x;

    printf("Informe x: ");
    scanf("%lf", &x);

    if((1 < x && x <= 9) || (11 <= x && x < 12) || x > 14)
        printf("Dentro do intervalo\n");
    else
        printf("Fora do intervalo\n");

    return 0;
}
