#include <stdio.h>
#include <math.h>

typedef struct ponto PONTO;

struct ponto {
    float x, y;
};

typedef struct circulo CIRCULO;

struct circulo {
    PONTO centro;
    float Raio;
};

int main (void)
{
    CIRCULO bola;
    printf("Informe as coordenadas do circulo: ");
    scanf("%f %f", &bola.centro.x, &bola.centro.y);
    printf("Informe o raio do circulo: ");
    scanf("%f", &bola.Raio);
    PONTO teste;
    while(1) {
        printf("Informe as coordenadas de um ponto: ");
        scanf("%f %f", &teste.x, &teste.y);
        float dx = (bola.centro.x - teste.x);
        float dy = (bola.centro.y - teste.y);
        float dist = sqrt(dx*dx+dy*dy);
        printf("Distancia = %f\n", dist);
        if(dist < bola.Raio){
            printf("Dentro do circulo\n");
        }
        else {
            printf("Fora do circulo\n");
        }
    }
    return 0;
}
