#include <stdio.h>

int main (void)
{
    int a, b;
    int r1, r2, r3;
    double r4;
    printf("Informe a e b: ");
    scanf("%d %d", &a, &b);
    r1 = a + b;
    r2 = a - b;
    r3 = a * b;
    r4 = a / (double) b;
    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);
    printf("r2 = %d\n", r3);
    printf("r3 = %.2lf\n", r4);
    return 0;
}
