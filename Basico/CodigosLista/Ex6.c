#include <stdio.h>

int main (void)
{
    double Xm, Xe;
    double Erro_absoluto, Erro_relativo;

    printf("Informe Xe e Xm: ");
    scanf("%lf %lf", &Xe, &Xm);

    Erro_absoluto = Xm - Xe;
    Erro_relativo = 100 * Erro_absoluto / Xe;

    printf("Erro absoluto = %lf e Erro relativo = %lf %%\n", Erro_absoluto, Erro_relativo);
}
