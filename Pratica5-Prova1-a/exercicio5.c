#include <stdio.h>
#include <stdlib.h>
#include "exercicio2.c"

int jogo( int chave, int n)
{
    int palpite;
    int count;
    int resultado;
    int palpit1 = 0;


    count = 0;
   
 
    do{
        printf("Entre com seu palpite:");
        scanf("%d", &palpite);

        if( (palpite == -999) && (count == 0))
        {
            printf("%d", chave);
            continue;
        } else if( palpite == -999 )
        {
            count += 0;
            printf("%d", ( chave - palpit1));
        } else
        {
            resultado = testa(chave, palpite);
            palpit1 = palpite;
            count += 1;
        }
        
    } while( (chave != palpite) && (count < n) );

    if(resultado == 1) return 1;
    else 
        return 0;

}



