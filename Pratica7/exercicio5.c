// Exercício 5: Inverso de um vetor

// Faça um programa para ler um vetor  de  elementos e gerar um outro vetor com esses  elementos em ordem inversa. 
// Exemplo: Se , deverá ser gerado um vetor . O valor de  é lido pelo teclado.


#include <stdio.h>
#include <stdlib.h>

#define maxElm 100

int main( int argc, const char*argv[]){
    double x[maxElm], y[maxElm];

    int n;
    int i;
    do{
        printf("Insira a dimensao do vetor( max. 100):");
        scanf("%d", &n);
    } while ( n < 0 || n > maxElm );

   printf("Insira os valores do vetor x:");
    for( i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    for( i = 0; i < n; i++){
        y[i] = x[ n - i - 1];
    }

    for( i = 0; i < n; i++){
        printf(" Y[%d] = %d", i , y[i]);
    }

    return 0;
}