#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char A[100][100];

void criar_matriz(int M, int N)
{
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            A[i][j] = '.';
        }
    }
}

void imprime_matriz(int M, int N)
{
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("%c", A[i][j]);
        }
        printf("\n");
    }
}

int main (void)
{
    int M, N;
    char a;
    printf("Insira as dimensoes da matriz: ");
    scanf("%d %d", &M, &N);
    printf("Para jogar use w, a, s, d: ");
    criar_matriz(M, N);
    int i, i0 = M / 2, j0 = N / 2;
    for(i = 1; i <= 1000; i++)
    {
        a = getch();
        if(a == 'a')
            j0--;
        else if(a == 'w')
            i0--;
        else if(a == 's')
            i0++;
        else if(a == 'd')
            j0++;
        system("cls");
        A[i0][j0] = '#'; // se i0 e j0 estiverem fora da matriz vai dar erro
        imprime_matriz(M, N);
    }
}
