#include <stdio.h>

int main (void)
{
    int idade;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    if(idade < 16)
    {
        printf("Nao pode votar\n");
    }
    else if(18 <= idade && idade < 70)
    {
        printf("Eh obrigado a votar\n");
    }
    else
    {
        printf("Pode votar mas nao precisa\n");
    }
    return 0;
}
