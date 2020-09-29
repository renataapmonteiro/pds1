// Exercício 1: Código do nome
// Escreva um programa para imprimir o seu primeiro nome em código ASC. 
// Se o seu nome for “Ana”, o seu programa deve imprimir “65 110 97”.

#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[20];
    int i = 0;
    printf("Digite seu nome:");
    scanf("%s", &string);
    printf("O valor ASCII de %s :", string);

    while (string[i])
    {
        printf(" %d", string[i++]);
    }
    
    return 0;
}