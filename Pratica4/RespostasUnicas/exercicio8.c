#include <stdio.h>

int somaImpares(int N){
    int soma = 0;
    for( int i = 0; i < N; i++)
        if (!(i % 2 == 0))
            soma += i;
            return soma;
};

int main(int N){
    printf(" a soma eh %d", somaImpares(5));
    printf(" a soma eh %d", somaImpares(10));
    printf(" a soma eh %d", somaImpares(20));
}