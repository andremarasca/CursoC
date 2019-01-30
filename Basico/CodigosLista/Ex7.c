#include <stdio.h>

int main (void)
{
    double X1, Y1, X2, Y2;
    double A, B;

    printf("Informe X1 Y1 X2 Y2: ");
    scanf("%lf %lf %lf %lf", &X1, &Y1, &X2, &Y2);

    A = (Y2 - Y1) / (X2 - X1);
    B = (Y1 * X2 - Y2 * X1) / (X2 - X1);

    printf("Y = %lf * x + %lf\n", A, B);
}
