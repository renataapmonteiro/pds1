// 1) Conversão de tipo

// a) Escreva uma função que recebe um número ponto flutuante como parâmetro e retorna um ponto 
// flutuante equivalente à sua parte inteira. Exemplo: se a sua função receber -3.141592 como parâmetro, 
// ela deve retornar -3.0. Protótipo da função:
// float parteInteira(float x);
// b) Escreva uma função que recebe um número ponto flutuante como parâmetro e retorna um ponto flutuante 
// equivalente à sua parte fracionária. Exemplo: se a sua função receber -3.141592 como parâmetro, 
// ela deve retornar -0.141592. Protótipo da função:
// float parteFracionaria(float x);
// c) Escreva uma função que recebe dois inteiros x e y como parâmetros e retorna um ponto flutuante 
// correspondente à divisão do primeiro pelo segundo (x dividido por y). Protótipo da função:
// float divInts(int x, int y);
// d) Faça um programa para testar as funções das letras a, b e c. Para cada função, teste pelo menos três
//  entradas diferentes que, idealmente, dão saídas diferentes.

#include <stdio.h>

float parteInteira(float x){
    return x = (int) x;
}

float parteFracionaria(float x){
    return x - (int) x;
}

float divInts(int x, int y){
    return  (float) x / (float) y;
}


void main(){
    // função parteInteira
    printf("\n O numero de entrada foi -3.141592 com saida: %f", parteInteira(-3.141592));
    printf("\n O numero de entrada foi 2.9856412 com saida: %f", parteInteira(2.9856412));
    printf("\n O numero de entrada foi 7.632148795 com saida: %f", parteInteira(7.632148795));

    // função parteFracionaria
    printf("\n O numero de entrada foi -3.141592 com saida: %f", parteFracionaria(-3.141592));
    printf("\n O numero de entrada foi 2.9856412 com saida: %f", parteFracionaria(2.9856412));
    printf("\n O numero de entrada foi 7.632148795 com saida: %f", parteFracionaria(7.632148795));

    // função divInts
    printf("\n 56 dividido por 8 tem resultado: %f", divInts(56, 8));
    printf("\n 53 dividido por 3 tem resultado: %f", divInts(53, 3));
    printf("\n 94 dividido por 87 tem resultado: %f", divInts(94, 87));
}