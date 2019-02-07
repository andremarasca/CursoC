#include <stdio.h>

int main (void)
{
    int x, y;
    printf("Informe as coordenadas x e y: ");
    scanf("%d %d", &x, &y);
    if(3 <= x && x <= 7 && 1 <= y && y <= 4)
    {
        printf("O ponto esta dentro do quadrado!\n");
    }
    else
    {
        printf("O ponto esta fora do quadrado!\n");
    }
    return 0;
}
