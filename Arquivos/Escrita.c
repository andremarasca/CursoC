#include <stdio.h>

int main (void)
{
    FILE *arquivo = fopen("andre.txt", "a");
    fprintf(arquivo, "ola\n");
    fclose(arquivo);
    return 0;
}
