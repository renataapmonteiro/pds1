#include <stdio.h>

float pesoIdeal(float h, char sexo){

    if(sexo == 'F') return (62.1 * h) - 44.7;
        else 
            return (72.7 * h ) - 58; 
}

float pesoAAlterar(float h, char sexo, float peso){
    return peso - pesoIdeal( h, sexo);
}

int main(float h, char sexo, float peso){

    printf("Seu a peso ideal eh %f\n", pesoIdeal(1.62, 'F'));
    
    printf("Seu a perder eh %f", pesoAAlterar(1.62, 'F', 66));

    return 0;
}