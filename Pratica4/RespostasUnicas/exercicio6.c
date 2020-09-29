#include <stdio.h>

float pesoIdeal(float h, char sexo){

    if(sexo == 'F') return (62.1 * h) - 44.7;
        else 
            return (72.7 * h ) - 58; 
}

int main(float h, char sexo){
    printf("Seu peso ideal eh %f", pesoIdeal(1.62, 'F'));

    return 0;
}