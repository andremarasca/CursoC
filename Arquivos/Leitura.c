#include <stdio.h>

int main (void)
{
    int N, i;
    FILE *arquivo = fopen("andre.txt", "r");
    fscanf(arquivo, "%d", &N);
    printf("N = %d\n", N);
    int v[N];
    for(i = 0; i < N; i++){
        fscanf(arquivo, "%d", &v[i]);
    }
    for(i = 0; i < N; i++){
        printf("%d ", v[i]);
    }
    fclose(arquivo);
    return 0;
}
