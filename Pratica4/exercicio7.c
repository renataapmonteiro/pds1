#include <stdio.h>
#include "pratica4.h"

int main( int argc, char const *argv[] ){

    char sexo;
    float h, pesoAtual, pesIdeal;
    
    do{
        printf("Digite seu sexo: M ou F");
        scanf("%C", &sexo);
        sexo = toupper(sexo);
        if( sexo != 'M' &&  sexo != 'F')
            printf("Valor invalido digite novamente");
    } while(sexo != 'M' &&  sexo != 'F');
    printf("Digite sua altura:");
    scanf("%f", &h);
    printf("Digite seu peso atual:");
    scanf("%f", &pesoAtual);

    pesIdeal = pesoIdeal(h, sexo);
    if ( (pesIdeal - pesoAtual) <= 0.001 )
        printf("Voce esta no seu peso Ideal\n");
    else if(pesIdeal > pesoAtual)
        printf("Voce precisa engordar %.2f", pesIdeal - pesoAtual);
    else 
        printf("Voce precisa emegrecer %.2f", pesoAtual - pesIdeal);
    
    return 0;
}