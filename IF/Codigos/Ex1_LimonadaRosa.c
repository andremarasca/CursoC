#include <stdio.h>

int main (void)
{
    double agua = 1.5, limoes = 5;
    double acucar = 120, groselha = 120, pessoas = 6;
    double q = 1, novo;
    int n;
    printf("################################\n");
    printf("Receita Original\n");
    printf("1 -> %.2lf litros de agua com gas\n", agua);
    printf("2 -> %.2lf limoes\n", limoes);
    printf("3 -> %.2lf ml de acucar refinado\n", acucar);
    printf("4 -> %.2lf ml de groselha\n", groselha);
    printf("5 -> Rendimento %.2lf pessoas\n", pessoas);
    printf("################################\n");

    printf("Informe o numero do ingrediente que deseja mudar a quantidade: ");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("Informe um novo valor pra agua com gas (em litros): ");
        scanf("%lf", &novo);
        q = novo / agua;
    }
    else if(n == 2)
    {
        printf("Informe um novo valor de limoes: ");
        scanf("%lf", &novo);
        q = novo / limoes;
    }
    else if(n == 3)
    {
        printf("Informe um novo valor pra acucar (em ml): ");
        scanf("%lf", &novo);
        q = novo / acucar;
    }
    else if(n == 4)
    {
        printf("Informe um novo valor pra groselha (em ml): ");
        scanf("%lf", &novo);
        q = novo / groselha;
    }
    else if(n == 5)
    {
        printf("Informe um novo valor pra quantidade de pessoas: ");
        scanf("%lf", &novo);
        q = novo / pessoas;
    }
    else
    {
        printf("Ingrediente invalido\n");
    }

    agua = agua * q;
    limoes = limoes * q;
    acucar = acucar * q;
    groselha = groselha * q;
    pessoas = pessoas * q;

    printf("################################\n");
    printf("Nova Receita\n");
    printf("%.2lf litros de agua com gas\n", agua);
    printf("%.2lf limoes\n", limoes);
    printf("%.2lf ml de acucar refinado\n", acucar);
    printf("%.2lf ml de groselha\n", groselha);
    printf("Rendimento %.2lf pessoas\n", pessoas);
    printf("################################\n");

    return 0;
}
