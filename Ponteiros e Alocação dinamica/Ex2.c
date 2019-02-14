#include <stdio.h>

float **aloca_matriz_int(int M, int N) {
    int i;
    float **A;
    A = (float **) malloc(M * sizeof(float*));
    for(i = 0; i < N; i++){
        A[i] = (float *) malloc(N * sizeof(float));
    }
    return A;
}

void limpa_matriz_int(float **A, int M) {
    int i;
    for(i = 0; i < M; i++){
        free(A[i]);
    }
    free(A);
}

void leitura_matriz_int(float **A, int M, int N) {
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("Informe o elemento A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
}

void impressao_matriz_int(float **A, int M, int N) {
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("%5.2f", A[i][j]);
        }
        printf("\n");
    }
}

int main (void)
{
    int M, N;
    float **A;
    printf("Informe as dimensoes da matriz: ");
    scanf("%d %d", &M, &N);
    A = aloca_matriz_int(M, N);
    leitura_matriz_int(A, M, N);
    impressao_matriz_int(A, M, N);
    limpa_matriz_int(A, M);
    return 0;
}
