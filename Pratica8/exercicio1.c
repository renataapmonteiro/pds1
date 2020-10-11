#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

#define maxT 100


int main( int argc, char const* argv[])
{
    int matriz[maxT][maxT];
    int m, n , k, zeros = 0;
    int comp_zeros;

    do{
        printf("Digite doi numeros que representem as dimensoes da matriz( m x n com m e n max. = 100):");
        scanf("%d %d", &m, &n);
        if( m < 0 || m > maxT || n < 0 || n > maxT )
        {
            printf(" Dimensao invalida ");
        }  
    } while ( m < 0 || m > maxT || n < 0 || n > maxT );

    do{
        printf("Digite um valor para k (min. 2):");
        scanf("%d", &k);
    } while ( k < 2);

    for( int i = 0; i < m; i++)
    {
        for( int j = 0; j < n; j++)
        {
            do{
                matriz[i][j] = rand ();
            } while ( matriz[i][j] < 1 || matriz[i][j] > k);
        }
    }
    printf("Matriz preenchida\n");
    imprimeMatriz(matriz, m, n);

    while(1)
    {
        comp_zeros = zeros;
        zeros = zeraTriSem( matriz, m, n);
        if (comp_zeros == zeros)
            break;

        printf("Matriz zerada\n"); 
        imprimeMatriz(matriz, m, n);
        printf("A Matriz possui %d zeros\n", zeros);

        transladaZeros( matriz, m , n);
        printf("Matriz com zeros transladados\n");
        imprimeMatriz(matriz, m, n);
        printf("A Matriz possui %d zeros\n", zeros);
    }
    

    printf("Matriz final\n");
    imprimeMatriz(matriz, m, n);
    printf("A Matriz possui %d zeros\n", zeros);

    return 0;
}