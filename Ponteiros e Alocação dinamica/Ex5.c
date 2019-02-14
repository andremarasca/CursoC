#include <stdio.h>

float **aloca_matriz_int(int M, int N) {
    int i;
    float **A;
    A = (float **) malloc(M * sizeof(float *));
    for(i = 0; i < N; i++){
        A[i] = (float *) malloc(N * sizeof(float));
    }
    return A;
}

void leitura_matriz_int(float **A, int M, int N, char letra)
{
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("Informe %c[%d][%d]: ", letra, i, j);
            scanf("%f", &A[i][j]);
        }
    }
}

void mostrar_matriz_int(float **A, int M, int N)
{
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }
}

void desalocar_matriz_int(float **A, int M)
{
    int i;
    for(i = 0; i < M; i++){
        free(A[i]);
    }
    free(A);
}

float soma(float **A, int M, int N)
{
    int i, j;
    float soma = 0;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            soma += A[i][j];
        }
    }
    return soma;
}

float media(float **A, int M, int N)
{
    int i, j, qtd = 0;
    float soma = 0;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            soma += A[i][j];
            qtd++;
        }
    }
    return (soma/qtd);
}

void somar_matrizes(float **A, float **B, int M, int N)
{
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            A[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main (void)
{
    float **A = aloca_matriz_int(3, 3);
    float **B = aloca_matriz_int(3, 3);
    leitura_matriz_int(A, 3, 3, 'A');
    leitura_matriz_int(B, 3, 3, 'B');
    somar_matrizes(A, B, 3, 3);
    mostrar_matriz_int(A, 3, 3);
    desalocar_matriz_int(A, 3);
    return 0;
}
