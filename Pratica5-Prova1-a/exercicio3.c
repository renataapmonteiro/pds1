#include <stdio.h>
#include <stdlib.h>
#include "exercicio2.c"

int jogo( int chave, int n)
{
    int palpite;
    int count;
    int resultado;

    count = 0;
   
    do{

        printf("Entre com seu palpite:");
        scanf("%d", &palpite);

        resultado = testa(palpite, chave);
        count += 1;

    } while( (chave != palpite) && (count < n) );

    if(resultado == 1) return 1;
    else 
        return 0;

}

