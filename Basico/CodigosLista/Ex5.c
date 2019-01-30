#include <stdio.h>

int main (void)
{
    int bit0, bit1, bit2, bit3, decimal;

    printf("Informe o bit3: ");
    scanf("%d", &bit3);

    printf("Informe o bit2: ");
    scanf("%d", &bit2);

    printf("Informe o bit1: ");
    scanf("%d", &bit1);

    printf("Informe o bit0: ");
    scanf("%d", &bit0);

    decimal = bit0 * 1 + bit1 * 2 + bit2 * 4 + bit3 * 8;

    printf("O numero binario %d%d%d%d eh %d em decimal\n", bit3, bit2, bit1, bit0, decimal);

}
