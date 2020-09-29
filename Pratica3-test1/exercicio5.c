// 5) Fast Pow

// a) Neste exercício você deve usar operações de deslocamento de bits << e/ou >>. Primeiro, faça uma função 
// de nome fast_pow_2 que recebe um inteiro expoente e retorna um unsigned long long contendo a potência de 
// dois correspondente. Por exemplo, se o expoente passado como parâmetro for 7, a sua função deve retornar 
// 2 elevado a 7.  Um número do tipo unsigned long long é um inteiro sem sinal de 64 bits. Você o trata 
// exatamente como um unsigned int, mas os seu alcance é muito maior. Protótipo da função: 
// unsigned long long fast_pow_2(int expoente);

// b) Depois, faça um programa para responder a seguinte pergunta: qual é a maior potência de 2 que um 
// unsigned long long é capaz de armazenar? Faça um programa que use a função fast_pow_2 para imprimir 
// esse limite. Para imprimir um unsigned long long você deve usar o especificador de formato %llu.  
 #include <stdio.h>

 unsigned long long int fast_pow_2( int expoente){
   return (long long int)1 << expoente;
 }

 void main (){
    printf("Exp 0 \n Saida: %llu", fast_pow2(0));
    printf("\nExp 32 \n Saida: %llu", fast_pow2(32));
    printf("\nExp 2 \n Saida: %llu", fast_pow2(2));
    printf("\nExp 54 \n Saida: %llu", fast_pow2(54));
 }