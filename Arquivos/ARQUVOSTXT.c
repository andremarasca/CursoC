#include <stdio.h>

/*

r 	Abre o arquivo somente para leitura. O arquivo deve existir. (O r vem do ingl�s read, ler)

r+ 	Abre o arquivo para leitura e escrita. O arquivo deve existir.

w 	Abre o arquivo somente para escrita no in�cio do arquivo.
    Apagar� o conte�do do arquivo se ele j� existir,
    criar� um arquivo novo se n�o existir. (O w vem do ingl�s write, escrever)

w+ 	Abre o arquivo para escrita e leitura, apagando o conte�do pr�-existente.

a 	Abre o arquivo para escrita no final do arquivo.
    N�o apaga o conte�do pr�-existente. (O a vem do ingl�s append, adicionar, apender)

a+ 	Abre o arquivo para escrita no final do arquivo e leitura.

fopen( ) 	Abrir um arquivo

fclose( ) 	Fechar um arquivo

putc( ) 	Escrever um caracter em um arquivo

fputc( ) 	Idem putc( )

getc( ) 	Ler um caracter de um arquivo

fgetc( ) 	Idem getc( )

fseek( ) 	Posicionar o ponteiro de arquivo num byte espec�fico

fprintf( ) 	� para o arquivo o que printf � para o console

fscanf( ) 	� para o arquivo o que scanf � para o console

feof( ) 	Devolve verdadeiro se o fim do arquivo foi atingido

ferror( ) 	Devolve verdadeiro se ocorreu um erro

rewind( ) 	Posicionar o ponteiro de arquivo no in�cio deste

remove( ) 	Apagar um arquivo

fflush( ) 	Descarregar um arquivo

*/

int main ()
{
    FILE *arquivo1,*arquivo2,*arquivo3;
    char frase[500];
    arquivo1 = fopen("C:\\Users\\Andre\\Desktop\\arquivo1.txt", "r");
    arquivo2 = fopen("C:\\Users\\Andre\\Desktop\\arquivo2.txt", "a");
    arquivo3 = fopen("arquivo3.txt", "w");//salva na mesma pasta do programa
    fscanf(arquivo1,"%s",frase);
    fprintf(arquivo2,frase);
    printf("%s\n",frase);
    fclose(arquivo1);
    fclose(arquivo2);
    return 0;
}
