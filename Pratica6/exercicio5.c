// Exercício 5: Conversão de caixa

// Faça um programa que leia um string e modifique todos os caracteres minúsculos por caracteres maiúsculos.

// Dica: os caracteres minúsculos tem o código ASCII entre 97 e 122 e os caracteres maiúsculos tem o código ASCII 
// entre 65 e 90.

#include <stdio.h>

int main( int argc, const char *argv[])
{
    char string[128];
    char a;
    int i = 0;
    printf("Digite uma frase:\n");
    do{
        scanf("%c", &a);
        if( a >= 97 &&  a <= 122){
            a -= 32;
        };
        string[i] = a;
        i++;
    } while( a != '\n' && a != '\0');
    printf("Sua frase em maiusculo eh: %s", string);

    return 0;
    
} 

