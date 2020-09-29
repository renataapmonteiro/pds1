// 2) Introdução à ponteiros

// a) Escreva um programa que cria três variáveis, uma do tipo inteiro, outra do tipo ponto flutuante e 
// outra do tipo caractere. Depois imprima na tela os endereços de memória que essas variáveis fazem acesso. 
 
// #include <stdio.h>

// void main(){
//     int x;
//     float y;
//     char z;
    
//     printf("O endereço de memoria de x: %p\n", &x);
//     printf(" O endereço de memoria de y: %p\n", &y);
//     printf(" O endereço de memoria de z: %p\n", &z);
// }

// b) Altere o programa abaixo de forma a fazer com que o mesmo imprima 3 ao invés de 0. Você não pode 
// executar nenhuma função de atribuição usando a variável x e nem alterar o comando printf da última 
// linha do corpo da função main.


// #include <stdio.h>
// void main() {
//     int x = 0;
//     int *ptr_x = &x;
//     *ptr_x = 3;
    
//     printf("%d", x);
// }

// c) Escreva uma função de nome soma1 que recebe como parâmetro um endereço de memória de inteiros 
// (ponteiro para inteiro) e que soma 1 ao valor do seu conteúdo. Essa função deve ser do tipo void. 
// Parte do seu protótipo é:

// void soma1(______________);

#include <stdio.h>

void soma1(int *ponteiro){
    (*ponteiro)++;
}

void main(){
    int x = 0;
    soma1(&x); 
    soma1(&x); 
    soma1(&x);
    printf("%d", x);
}

// d) Resolva o exercício 2b usando a função do soma1 do exercício anterior.
 
