// Exercício 3: Conta Poupança
// Uma conta poupança foi aberta com um depósito de R$789,54, 
// com rendimentos de 0.56% de juros ao mês. No segundo mês, 
// R$303,20 reais foram depositados nessa conta poupança. 
// No terceiro mês, R$58,25 reais foram retirados da conta. 
// Implemente um programa que imprime quanto haverá nessa conta no quarto mês.

// Resposta: A conta terá R$1050,91 no quarto mês.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    float deposito1 = 789.54;
    float deposito2 = 303.20;
    float retirada = 58.25;

    // mês 1
    float month1 = deposito1;

    // mês 2
    float rendimento = deposito1*0.0056;
    float month2 = deposito1 + rendimento + deposito2;

    // mês 3
    float rendimento2 = month2 * 0.0056;
    float month3 = month2 + rendimento2 - retirada;

    // mês 4
    float rendimento3 = month3*0.0056;
    float month4 = month3 + rendimento3; 

    printf("o valor em conta: %.2f \n", month4);
    printf("o valor em conta: %f", month4);

    return 0;
}