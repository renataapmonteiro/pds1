// // Exercício 4: IMC
// Brutus e Olívia foram ao médico, que disse a eles que ambos estão fora do peso ideal. 
// Ambos discordaram veementemente da afirmação do médico. Para provar que estava certo, o 
// médico mostrou o Índice de Massa Corporal (IMC) de ambos, considerando que 
// Brutus tem 1,84m e pesa 122kg e que Olívia tem 1,76m e pesa 45kg. Implemente um programa para 
// mostrar o IMC de Brutus e Olívia e qual é a quantidade mínima de quilos que Brutus e Olívia
//  devem perder ou ganhar para atingirem um peso saudável segundo a classificação do IMC. 
//  Use a seguinte fórmula para cálculo do IMC:                    

//                    IMC =  peso/(altura × altura)

// A tabela abaixo descreve a classificação para as faixas de IMC.

// IMC	Classificação
// < 16	Magreza grave
// 16 a < 17	Magreza moderada
// 17 a < 18.5	Magreza leve
// 18.5 a < 25	Saudável
// 25 a < 30	Sobrepeso
// 30 a < 35	Obesidade grau I
// 35 a < 40	Obesidade grau II (severa)
// ≥ 40	Obesidade grau III (mórbida)


// Resposta: O IMC do Brutus é 36,03 e o IMC da Olívia é 14,53. 
// Brutus precisa perder, no mínimo, (aproximadamente) 37 quilos e Olívia precisa ganhar, 
// no mínimo, (aproximadamente) 12 quilos.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float oliviaH = 1.76;
    float brutusH = 1.84;

    float oliviaP = 45;
    float brutusP = 122;

    float imcOlivia = oliviaP /(oliviaH*oliviaH);
    float imcBrutus = brutusP /(brutusH*brutusH);
    
    float ImcSaudavel = 18.5;

    float PesoSaudavelOlivia = ImcSaudavel * (oliviaH*oliviaH);
    float PesoSaudavelBrutus = ImcSaudavel * (brutusH*brutusH);

    printf("O IMC do Brutus %c %.2f \n", 130, imcBrutus);
    printf("O IMC da Olivia %c %.2f \n", 130, imcOlivia);
    printf("O Peso ideal do Brutus %c %.2f\n", 130, PesoSaudavelBrutus);
    printf("O Peso ideal da Olivia %c %.2f\n", 130, PesoSaudavelOlivia);

    float pesoNecOlivia = oliviaP - PesoSaudavelOlivia;
    float pesoNecBrutus = brutusP - PesoSaudavelOlivia;

    if(pesoNecOlivia != 0)
    {
       if(pesoNecOlivia <0)  
        printf("O Peso a ganhar da Olivia %c de aproximadamente %.2f\n", 130, pesoNecOlivia*(-1));
        
        else if( pesoNecOlivia > 0)
        printf("O Peso a perder da Olivia %c de aproximadamente %.2f\n", 130, pesoNecOlivia);
    };

    if(pesoNecBrutus != 0)
    {
        if(pesoNecBrutus < 0)
        printf("O Peso a ganhar do Brutus %c de aproximadamente %.2f\n", 130, pesoNecBrutus*(-1));

        else if(pesoNecBrutus> 0)
        printf("O Peso a perder do Brutus %c de aproximadamente %.2f\n", 130, pesoNecBrutus);
    }


    return 0;

}