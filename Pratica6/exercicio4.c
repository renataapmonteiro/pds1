// Exercício 4: Tamanho de uma string

// Implemente um programa que leia um string e conte o número de caracteres. Não use a função strlen. 
// Para ler uma string de até 127 caracteres do teclado, use o seguinte código:

// char linha[128];
// printf("digite uma linha:\n");
// fgets(linha, 128, stdin);

#include<stdio.h>


int main(int argc, const char *argv[]){
    
    char linha[128];
    printf("digite uma linha:\n");
    fgets(linha, 128, stdin);

    int tamanho = 0;
    for( int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++)
    {
        tamanho++;
    }

    printf("A Linha possui %d caracteres.\n", tamanho);
    return 0;
}


