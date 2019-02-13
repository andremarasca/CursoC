#include <stdio.h>
int main (void)
{
    int i,j,c;
    double soma=0,n=0;
    char o;
    FILE *entrada = fopen("entrada.txt", "r");
    fscanf(entrada, "%d",&c);
    fscanf(entrada, " %c",&o);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            fscanf(entrada, "%lf",&n);
            if(i==c)
            {
                soma+=n;
            }
        }
    }
    FILE *saida = fopen("saida.txt", "w");
    if(o=='S') fprintf(saida,"%.1lf\n",soma);
    else fprintf(saida,"%.1lf\n",soma/12);
    return 0;
}
