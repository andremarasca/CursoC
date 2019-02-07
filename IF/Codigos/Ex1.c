#include <stdio.h>

int main (void)
{
    int a, b;
    printf("Informe dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        printf("O maior eh o primeiro: %d\n", a);
    }
    else
    {
        printf("O maior eh o segundo: %d\n", b);
    }
    return 0;
}
