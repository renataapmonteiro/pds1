// Exercício 3: Cálculo do Seno de 3,14 e de 4,13
// Escreva um programa que imprime na tela os valores do seno de 3,14 e de 4,13. Use (= copiar e colar) o código que imprime o seno de 1,5, que está nos slides da Aula 2, para auxiliá-lo. 

#include <stdio.h>
#include <math.h>

int main( int argc, char*argv[]){
    float y, x;
    y = sin(3.14);
    x = sin(4.13);
    printf("O  seno de 3.14 eh: %f", y);
    printf("\n");
    printf("O  seno de 4.13 eh: %f", x);
    return 0;
}


