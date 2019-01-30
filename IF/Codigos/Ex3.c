#include <stdio.h>

int main (void)
{
    float x;
    printf("Informe um valor real: ");
    scanf("%f", &x);
    if((1 < x && x <= 9) || (11 <= x && x < 12) || (x > 14)){
        printf("Dentro da regiao\n");
    }
    else {
        printf("Fora da regiao\n");
    }
    return 0;
}
