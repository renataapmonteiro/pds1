// Exercício 7: Teste da Função rand()

// Uma boa função para geração de números aleatórios deve gerar valores com igual probabilidade, i.e., se 
// eu quero gerar 100 valores entre 1 e 10, o número de vezes que cada número é gerado deve ser próximo de 10.
//  Assim, nesta prática você deve criar um programa para testar a qualidade da função rand() da linguagem C. 
//  Para isso, gere  números aleatórios entre 0 (inclusive) e 999 (inclusive) e conte quantas vezes cada número foi 
//  gerado. Imprima a diferença entre a maior e a menor contagem. Exemplo: se o número 83 foi aquele que mais vezes 
//  foi gerado, com 5315 gerações, e o número 762 foi aquele que menos vezes foi gerado, com 4802 gerações, então seu 
//  programa deve imprimir .

#include <stdio.h>
#include <stdlib.h>

#define maxElm 5000000
#define tamV 1000

int main( int argc, const char*argv[]){
    
    int QuantyVetor[tamV];
    int n, maior, menor;

    for (int i = 0; i < tamV ; i++)
    {
        QuantyVetor[i] = 0;
    }

    for (int i = 0; i < maxElm ; i++)
    {
        do{
            n = rand();
        } while( n < 0 || n > tamV - 1);
        QuantyVetor[n]++;
    }

    maior = QuantyVetor[0];
    menor = QuantyVetor[0];

    for (int i = 0; i < tamV ; i++)
    {
        if( QuantyVetor[i] >= maior)
        {
            maior = QuantyVetor[i];
        }
        if( QuantyVetor[i] <= menor)
        {
            menor = QuantyVetor[i];
        }
    }
    printf(" A diferenca eh %d", maior - menor);
    return 0;
}