#include <stdio.h>

int main (void)
{
    char d;
    printf("A lampada nao funciona\n");
    printf("A lampada estava plugada? ");
    scanf(" %c", &d);
    if(d == 'n')
    {
        printf("plugar a lampada!\n");
    }
    else
    {
        printf("O bulbo queimou? ");
        scanf(" %c", &d);
        if(d == 's')
        {
            printf("Trocar o bulbo!\n");
        }
        else
        {
            printf("Comprar nova lampada!\n");
        }
    }
    return 0;
}
