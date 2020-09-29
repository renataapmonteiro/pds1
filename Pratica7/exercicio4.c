// Exercício 4: Intercalação de vetores

// Faça um programa que leia 2 vetores x e y de 10 elementos de cada um. Intercale os elementos desses 2 vetores 
// formando assim, um novo vetor z de 20 elementos, onde, nas posições ímpares de R , estejam os elementos de x e, nas 
// posições pares, os elementos de y . Exemplo: Se  e , então . Imprimir o vetor .

#include <stdio.h>

int main( int argc, char const *argv[]){

    int x[10];
    int y[10];
    int z[20];
    int counterX = 0, counterY = 0;

    printf("Digite os 10 valores que compoe o vetor X:\n");
    for(  int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Digite os 10 valores que compoe o vetor Y:\n");
    for(  int i = 0; i < 10; i++)
    {
        scanf("%d", &y[i]);
    }

    for ( int i = 0; i < 20; i++)
    {
        if( i % 2 == 0)
        {
            z[i] = x[counterX];
            counterX++;
        } 
        else 
        {
            z[i] = y[counterY];
            counterY++;
        }
    }
    
    for( int i = 0; i < 20; i++){
       printf(" Z[%d] = %d\n", i , z[i]);
    }
    return 0;
}
