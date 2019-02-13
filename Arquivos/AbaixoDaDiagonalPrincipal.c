#include <stdio.h>

int main (void)
{
    char operacao;
    float A[12][12];
    FILE *entrada = fopen("andre.txt", "r");
    fscanf(entrada, " %c", &operacao);
    int i, j, qtd = 0;
    float soma = 0;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            fscanf(entrada, "%f", &A[i][j]);
        }
    }
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            if(i > j) {
                soma = soma + A[i][j];
                qtd = qtd + 1;
            }
        }
    }
    FILE *saida = fopen("saida.txt", "w");
    if(operacao == 'S') {
        fprintf(saida, "Soma = %f\n", soma);
    }
    else {
        fprintf(saida, "Media = %f\n", soma / qtd);
    }
    return 0;
}
