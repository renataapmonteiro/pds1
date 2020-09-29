// Exercício 1

// Crie uma função que retorna a função de densidade de probabilidade  
// para cada uma dessas distribuições, de acordo com as fórmulas abaixo.

// Considere usar as funções exp(x) para calcular  e fabs(x) para calcular , ambas funções encontradas 
// na biblioteca math.h. 

// Exemplos:

// fabs(-5.3) retorna 5.3 
// exp(3) retorna a 

// Além disso, considere que  ou então use a constante M_PI da biblioteca math.h. Por fim, note que 
// além de,as funções podem ter outros parâmetros de entrada. 
// A função densidade de probabilidade da distribuição de Laplace, por exemplo, 
// tem como parâmetros de entrada ,  e .


// Exercício 2

// Crie e compile um módulo que contenha as funções estatísticas implementadas no exercício anterior.


// Exercício 3

// Implemente um programa que use o módulo criado do exercício anterior para calcular e exibir a função
//  densidade de probabilidade nos seguintes pontos:

// cauchy(x=-2) [resultado para conferência: 0.063662]

// gumbel(x=0, $\mu$=0.5, $\beta$=2) [resultado para conferência: 0.177786]

// laplace(x=-6, $\mu$=-5, $b$=4) [resultado para conferência: 0.097350]

#include <stdio.h>
#include "estatistica.h"

void main(){
    printf("Cauchy: f(-2) = %f\n", cauchy(-2));
    printf("Gumbel: f(0, 0.5 ,2) = %f\n", gumbel(0, 0.5, 2));
    printf("Laplace: f(-6, -5 ,4) = %f\n", laplace(-6, -5, 4));
}