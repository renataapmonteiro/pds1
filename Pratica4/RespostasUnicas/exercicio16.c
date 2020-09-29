#include <stdio.h>
#include "pratica4.h"

int main( int argc, char const *argv[] ){
    int num1, num2;
    do{
        printf("Digite o primeiro numero:");
        scanf("%d", &num1);
        if( num1 < 1)
            printf("Numero invalido digite novamente");
    } while(num1 < 1);
    do{
        printf("Digite o segundo numero:");
        scanf("%d", &num2);
        if( num2 < 1)
            printf("Numero invalido digite novamente");
    } while(num2 < 1);

    printf("O mmc de %d e %d eh %d", num1, num2, mmc(12,20));
    printf("O mdc de %d e %d eh %d", num1, num2, mdc(12,20));

    return 0;
}