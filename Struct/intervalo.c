#include <stdio.h>

typedef struct intervalo INTERVALO;

struct intervalo {
    float a, b;
};

int main (void)
{
    INTERVALO teste;
    printf("Informe os valores do intervalo: ");
    scanf("%f %f", &teste.a, &teste.b);
    float x;
    while(1) {
        printf("Informe um numero: ");
        scanf("%f", &x);
        if(teste.a <= x && x <= teste.b) {
            printf("Dentro do intervalo\n");
        }
        else {
            printf("Fora do intervalo\n");
        }
    }
    return 0;
}
