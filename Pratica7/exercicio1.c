// Exercício 1: Produto Escalar

// Escreva um programa em C que recebe dois arranjos de números reais u e v e a dimensão  dos dois arranjos e que 
// retorna o produto escalar de u e v . O produto escalar de dois arranjos é dado pela seguinte expressão: 
// Assuma que  é menor que o número máximo de elementos do arranjo (por exemplo, 100). 
// Para testar, preencha cada vetor com um único valor.


#include <stdio.h>

#define maxElm 100

int main( int argc, const char*argv[]){
    double u[maxElm], v[maxElm];

    double proE = 0;
    unsigned int n;
    int i;
    do{
        printf("Insira a dimensao do vetor( max. 100):");
        scanf("%d", &n);
    } while ( n > maxElm );

    printf("entre com os valores de u:");

    for( i = 0; i < n ; i++ ){
        scanf("%lf", &u[i]);
    }

    printf("entre com os valores de v:");

    for( i = 0; i < n ; i++ ){
        scanf("%lf", &v[i]);
    }

    for( i = 0; i < n ; i++ ){
        proE += ( u[i] * v[i] );
    }

    printf("O produto escalar de u e v eh %lf", proE);
    return 0;
}