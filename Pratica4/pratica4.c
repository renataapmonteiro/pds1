#include<stdio.h>
#include <math.h>
#include "pratica4.h"

#define pi = 3.141592;

float paraMetrosPorSegundo(float v){
    float M = v / (float) 3.6;
   return M;
};

float areaCirculo(float raio)
{
    return 3.141592 * pow(raio, 2);
};

int maior3(int n1, int n2, int n3)
{
    if( n1 > n2)
    {
        if(n1 > n3) return n1;
         else
            return n3;
    } else {
        if( n2 > n3) return n2;
        else 
            return n3;
    }
};

int ehPar(int n)
{
    if(n % 2 == 0) return 1;
    else return 0;
};

int ehDivisivelPor3ou5(int n)
{
    if( n % 3 == 0 || n % 5 ==0)
        if( !(n % 3 == 0) || !( n % 5 == 0))
            return 1;
            else return 0;
};

float pesoIdeal(float h, char sexo){

    if(sexo == 'F') return (62.1 * h) - 44.7;
        else 
            return (72.7 * h ) - 58; 
}

int somaImpares(int N){
    int soma = 0;
    for( int i = 0; i < N; i++)
        if (!(i % 2 == 0))
            soma += i;
            return soma;
};

double fatorial(int N){

    double mult = 1;
    for( int i = 2; i <= N; i++)
        mult *= i;

     return mult;
       
};

int somaNumerosDiv3ou5(int N){ 
    int soma = 0;
    int i = 1;
    while ( i <= N)
    {
        if(ehDivisivelPor3ou5(i))
            soma += i;
        i++;
    }
        return soma;

};

float calculaMedia(int x, int y, int z, int operacao)
{
    switch (operacao)
    {
        case 1:
            return pow( x * y * z , 1.0 / 3.0);
        case 2:
            return ( x + 2.0 * y + 3.0 * z ) / 6.0;
        case 3:
            return  3.0 / (1.0 / x + 1.0 / y + 1.0 / z);
        case 4:
            return (x + y + z) / 3.0;
    } 

    return -1;
}

int numeroDivisores(int N){
    int a = 1;
    for( int i = 2; i <= N; i++)
        if( N % i == 0)     
            a++;
    return a;
};

int enesimoFibonacci(int N){
    if(N == 1) return 1;
    else 
        if(N == 2) return 1;
        else 
            return (N - 1) + ( N - 2);
};

int mdc(unsigned int x, unsigned int y){
    int resto;
    do{
        resto = x % y;
        x = y;
        y = resto;
    } while(resto != 0);

    return x;
};

int mmc(unsigned int x, unsigned int y){    
    return (x * y) / mdc(x, y);
};