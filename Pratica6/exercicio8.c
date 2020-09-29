// Exercício 8: Abreviação de nome

// Escreva um programa para ler um nome completo do teclado terminado com um ponto final (‘.’). 
// Seu programa deve imprimir o mesmo na forma abreviada. Exemplo: o nome “Pedro Olmo Stancioli Vaz de Melo.” 
// deve ser abreviado para “P.O.S.V.M.”. Note que o processo de abreviação deve ignorar palavras que começam 
// com caracteres minúsculos. Considere que o usuário irá inserir apenas nomes válidos, sempre irá terminar o 
// nome com o caractere ‘.’ e o nome não conterá acentos.


#include <stdio.h>

int main( int argc, int argv[]){
    char letra;
    printf("Entre com seu nome completo(termine-o com ponto final):\n");
    do{
        letra = getc(stdin);
        if(letra >= 65 && letra <= 90){
            printf("%c.", letra);
        }
    } while( letra != '.');
    printf("\n");

    return 0;
}
