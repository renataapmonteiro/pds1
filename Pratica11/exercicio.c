#include <stdio.h>
#include <stdlib.h>

#define INFINITO 2000000000;

void troca( int v[], int i, int j)
{
    int aux;
    aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

void ordenar_por_selecao(int x[], int n)
{
    int menor, pos;
    int i = 0;
    int k = 0;

    while( k < n )
    {
        menor = INFINITO;
        for ( i = k; i < n; i++)
        {
            if( x[i] < menor )
            {
                menor = x[i];
                pos = i;
            }
        }
        troca(x,k,pos);
        k++;
    }
}


int main( int argc, char const *argv[])
{
    int n = 1;
    int cartelaAtual[6];
    int cartelaVencedora[6] = { 6, 9, 22, 23, 48, 52};
    int cartelaLost[6] = { 4, 8, 15, 16, 23, 42};
    FILE *arq;
    FILE *arq_aux;
    arq = fopen("cartelas.txt", "r");
    arq_aux = fopen("auxiliar.txt", "w");

    while(feof(arq) == 0)
    {
        int cont;
        fprintf(arq_aux,"Ordenada:");

        for (int i = 0; i < 6; i++)
        {
           fscanf(arq, "%d", &cartelaAtual[i]);  
        }
               
        ordenar_por_selecao(cartelaAtual, 6);

        for (int i = 0; i < 6; i++)
        {
            fprintf(arq_aux, "%d ", cartelaAtual[i]); 
        }
                
        for ( cont = 0; cont < 6; cont++)
        {
            if(cartelaAtual[cont] != cartelaVencedora[cont])
            break;
        }
            
        if( cont == 6 )
        {
            printf("Cartela vencendora: %d", n );
            
        }
        n++;   
    }

    fclose(arq);
    fclose(arq_aux);

    return 0;
}