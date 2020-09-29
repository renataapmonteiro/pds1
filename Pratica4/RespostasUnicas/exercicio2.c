#include <stdio.h>
#include <math.h>

float areaCirculo(float raio)
{
    float pi, a;
    pi = 3.141592;

    a = pi * pow(raio, 2);
   return a;
};


int main(float raio){
    printf("Digite o raio do circulo ao qual vc deseja saber a area:\n");
    scanf("%f", &raio);
    printf("A area do circulo eh de %f", areaCirculo(raio));

    return 0;
};