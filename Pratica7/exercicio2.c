// Exercício 2: Fibonacci

// A sequência de Fibonacci pode ser definida como:

// fib(0) = 1
// fib(1) = 1
// fib(n) = fib(n-1) + fib(n-2), para n>2

// Implemente um programa que calcule a série de Fibonacci e armazene em um vetor cada elemento da série, de 
// forma que a posição 0 armazene o termo 0, a posição 1 o termo 1, e assim por diante. Seu programa deve receber do 
// usuário um número entre 0 e 1000 e imprimir o termo correspondente ao número recebido. O usuário deve ser capaz de 
// entrar com vários números interativamente em uma mesma execução. O programa termina quando o usuário entrar com um 
// número negativo ou maior que 1000. Dica: se o tipo int for insuficiente para armazenar todos os elementos da série, 
// use outro tipo de dados.


#include <stdio.h>

#define maxVal 1000

int main( int argc, const char*argv[]){

    
    int fibo;
    double fibVet[maxVal];
    int counter = 2;

    fibVet[0] = 1;
    fibVet[1] = 1;

    do{
        printf("Digite o numero que deseja encontrar na serie de fibonacci:");
        scanf("%d", &fibo);

        if( fibo >=0 && fibo <= 1000){
            for( int i = 2; fibo >= i ; i++){
                fibVet[i] = fibVet[i -1] + fibVet[ i - 2];
                counter++;
            }

            printf("O numero %d da serie de fibonacci eh %4.3e\n", fibo, fibVet[fibo]);
        } else {
            printf("Fim da Execucão.");
        };
    } while( fibo >= 0 && fibo <= 1000 );

    printf(" O numero de atribuicoes foi %d\n", counter);
    return 0;
}