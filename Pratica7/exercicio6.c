// Exercício 6: União de vetores

// Faça um programa para preencher dois vetores X e Y de 60 posições com valores aleatórios entre 0 e 365. 
// Imprima a conjunto união desses dois vetores. Curiosidade: leia sobre o paradoxo do aniversário.


#include <stdio.h>
#include <stdlib.h>

#define tamV 60

int main( int argc, const char*argv[]){
   
   int x[tamV];
   int y[tamV];
   int Uni[2*tamV];

   int n;
   int atualT = 0;
   int lucky = 0;

    for (int i = 0; i < tamV ; i++)
    {
        do{
            x[i] = rand();
        } while( x[i] < 0 || x[i] > 365);

        do{
            y[i] = rand();
        } while( y[i] < 0 || y[i] > 365);
    }

    for (int i = 0; i < tamV ; i++)
    {
        printf("%d\n", x[i]);
        printf("%d\n", y[i]);
    }
     
    printf("\n");

    for (int i = 0; i < tamV ; i++)
    {
        n = x[i];
        lucky = 0;

        for (int j = 0; j < atualT ; i++)
        {
            if( n == Uni[i])
            {
                lucky = 1;
                break;
            }
        }
        if(!lucky)
        {
            Uni[atualT] = n;
            atualT++;
        }

        n = y[i];
        lucky = 0;

        for (int j = 0; j < atualT ; i++)
        {
            if( n == Uni[i])
            {
                lucky = 1;
                break;
            }
        }
        if(!lucky)
        {
            Uni[atualT] = n;
            atualT++;
        }
    }
    printf("Vetor unido\n");

    for ( int i = 0; i < atualT ; i++)
    {
        printf(" U[%d] = %d", i, Uni[i]);
    }
    return 0;
}   