#include <stdio.h>

void main ()
{
    double C = 10, L = 10, H = 3;
    double X = 4, M1 = 1, N1 = 1;
    double Y = 2, M2 = 2, N2 = 1;
    double area_janela, area_porta, area_bruta, area_total;
    double R = 10, litros_de_tinta;

    area_bruta = 2 * C * H + 2 * L * H;
    area_janela = X * M1 * N1;
    area_porta = Y * M2 * N2;

    area_total = area_bruta - area_janela - area_porta;

    printf("A area externa dessa casa eh: %.2lf\n", area_total);

    litros_de_tinta = area_total / R;

    printf("Sao necessarios %.2lf litros de tinta para pintar o exterior dessa casa\n", litros_de_tinta);
}
