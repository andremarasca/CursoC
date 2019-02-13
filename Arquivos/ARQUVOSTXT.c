#include <stdio.h>

/*

r 	Abre o arquivo somente para leitura. O arquivo deve existir. (O r vem do inglês read, ler)

r+ 	Abre o arquivo para leitura e escrita. O arquivo deve existir.

w 	Abre o arquivo somente para escrita no início do arquivo.
    Apagará o conteúdo do arquivo se ele já existir,
    criará um arquivo novo se não existir. (O w vem do inglês write, escrever)

w+ 	Abre o arquivo para escrita e leitura, apagando o conteúdo pré-existente.

a 	Abre o arquivo para escrita no final do arquivo.
    Não apaga o conteúdo pré-existente. (O a vem do inglês append, adicionar, apender)

a+ 	Abre o arquivo para escrita no final do arquivo e leitura.

fopen( ) 	Abrir um arquivo

fclose( ) 	Fechar um arquivo

putc( ) 	Escrever um caracter em um arquivo

fputc( ) 	Idem putc( )

getc( ) 	Ler um caracter de um arquivo

fgetc( ) 	Idem getc( )

fseek( ) 	Posicionar o ponteiro de arquivo num byte específico

fprintf( ) 	É para o arquivo o que printf é para o console

fscanf( ) 	É para o arquivo o que scanf é para o console

feof( ) 	Devolve verdadeiro se o fim do arquivo foi atingido

ferror( ) 	Devolve verdadeiro se ocorreu um erro

rewind( ) 	Posicionar o ponteiro de arquivo no início deste

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
