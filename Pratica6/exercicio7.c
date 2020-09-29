// Exercício 7: Inversão de string

// Escreva um programa para ler um texto do teclado e imprimir o inverso dele. Use o ponto final para indicar o 
// término do texto, ou seja, o usuário deve terminar o texto sempre com um ponto final. Leia um caractere do 
// texto por vez usando a função getc como a seguir:

// char c = getc(stdin); 


#include <stdio.h>

int main( int argc, const char *argv[]){

    char frase[128];
    char fraseInv[128];
    char c;
    int i = 0;
    int j;
    printf("Digite uma frase, use o ponto final:");
    do
    {
        c = getc(stdin);
        frase[i] = c;  
        i++;   
    
    } while ( c != '.');
    j = i - 1;
    fraseInv[i] = '\0';
    i = 0;
    while (j >= 0)
    {
        fraseInv[j] = frase[i] ;
        j--;
        i++;
    }
    printf(" A frase invertida eh %s", fraseInv);

    return 0;
}