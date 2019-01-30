#include <stdio.h>
#include <math.h>
#define pi 3.14159265

int main (void)
{
    double leite = 1, ovos = 4;
    double acucar = 200, farinha = 90;
    double baunilha = 5;
    double q;
    printf("Informe o percentual da receita desejado: ");
    scanf("%lf", &q);
    leite = leite * q / 100.0;
    ovos = ovos * q / 100.0;
    acucar = acucar * q / 100.0;
    farinha = farinha * q / 100.0;
    baunilha = baunilha * q / 100.0;
    printf("%.2lf litros de leite\n", leite);
    printf("%.2lf ovos\n", ovos);
    printf("%.2lf gramas de acucar em po\n", acucar);
    printf("%.2lf gramas de farinha de trigo\n", farinha);
    printf("%.2lf ml de essencia de baunilha\n", baunilha);
    return 0;
}
