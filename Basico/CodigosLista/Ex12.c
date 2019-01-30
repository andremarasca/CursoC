#include <stdio.h>

int main (void)
{
    float H, H2;
    int horas, minutos, segundos;

    printf("Informe H: ");
    scanf("%f", &H);

    horas = (int) H;
    H2 = H - horas;
    H2 = H2 * 60;
    minutos = (int) H2;
    H2 = H2 - minutos;
    H2 = H2 * 60;
    segundos = (int) H2;

    printf("%f horas sao %d horas, %d minutos e %d segundos\n", H, horas, minutos, segundos);
}
