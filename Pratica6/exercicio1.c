// Exercício 1: Número de Euler

// O valor de  (número de Euler) pode ser aproximado pelo somatório:

// e = 1 + 1/1! + 1/2! + 1/3! + 1/4! ....

// Implemente um programa para aproximar o valor de e. Seu programa deve aumentar a precisão da aproximação 
// calculando iterativamente (isto é, num laço) os termos do somatório acima. Seu programa deve parar a 
// aproximação quando o i-ésimo termo (1/i!) for menor do que 10^-6.

// Implemente esse programa fazendo uma função separada para calcular o fatorial de .


#include<stdio.h>
#include<math.h> 

#define cond pow(10, -6)

double fatorial(int n){
    double fat;
    for( fat = 1; n > 1; n= n-1){
        fat = fat * n;
    }
    return fat;
    printf("%d", fat);
};

int main( int argc, char const *argv[]){
    double pEu = 1;
    double e = pEu;
    for (int i = 1; pEu > cond ; i++)
    {
        pEu = 1.0 / fatorial(i);
        e += pEu;
    }
    printf("O numero de euler sera %lf", e);
    return 0;
}
