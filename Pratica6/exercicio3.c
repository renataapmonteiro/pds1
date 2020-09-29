// Exercício 3: Triângulo de Floyd

// Faça um programa que lê um número inteiro N e imprime as N primeiras linhas do triângulo de Floyd:

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// Desafio: Faça um programa para imprimir a N-ésima linha sem calcular as anteriores.

#include <stdio.h>

int main( int argc, char const *argv[]){
    int N, count = 1;
    printf("Digite o valor de N (obs: numero inteiro positivo):\n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }

        printf("\n");
    }
    
    return 0;
}
