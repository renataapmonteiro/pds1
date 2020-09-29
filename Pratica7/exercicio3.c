// Exercício 3: Média dos elementos de um vetor

// Escreva uma função em C que recebe um vetor de números reais v  e número de elementos n armazenados em  e que retorna 
// a média dos  elementos armazenados em v . O vetor deve ser preenchido com números aleatórios através de uma outra função. 
// Para gerar números aleatórios, use a função drand48() no Linux, ou a função rand() no Windows, da biblioteca stdlib.h.


#include <stdio.h>
#include <stdlib.h>

#define maxElm 100

double mediaV( int vetor[], int n){
    int somaV = 0;
    for( int i = 0 ; i < n ; i++){
        somaV += vetor[i];
        return  (double) somaV / (double) n;
    }
}

void Vcomplemento( int *vetor, int n)
{
    for ( int i = 0; i < n; i++)
    {
        vetor[i] = rand();
    }
}

int main( int argc, char const *argv[]){
    double v[maxElm];

    double media;
    int n;
    do{
        printf("Insira a dimensão do vetor( max. 100):");
        scanf("%d", &n);
    } while ( n < 0 || n > maxElm );

    Vcomplemento(v, n);
    media = mediaV(v, n);

    printf("A media eh %lf", media);
    return 0;
}