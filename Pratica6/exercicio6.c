// Exercício 6: Detector de palíndromos

// Implemente código C para testar se uma string é um palíndromo. Um palíndromo é uma palavra idêntica quando 
// lida de trás para frente, como "arara", "radar" e "reviver".

#include <stdio.h>
#include <stdlib.h>

int main( int argc, const char *argv[])
{
    char string[128];
    char a;
    int i = 0;
    int palin;

    printf("Digite uma frase:\n");
    do{
        scanf("%c", &a);
        if( a >= 97 &&  a <= 122){
            a -= 32;
        };
        string[i] = a;
        i++;
    } while( a != '\n' && a != '\0');

    i = 0;
    int b = i - 2;
    int metade = b / 2;

    while( b >= metade)
    {
        if( string[b] != string[a])
        {
            palin = 0;
            break;
        } 
        
        b--;
        i++;
    }

    if(palin){
        printf("Palindromo!");
        return 1;
    } else {
        printf("Nao eh palindromo!");
    }
    return 0;
   
           

} 