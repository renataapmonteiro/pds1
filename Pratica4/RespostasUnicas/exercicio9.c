#include <stdio.h>

double fatorial(int N){

    double mult = 1;
    for( int i = 2; i <= N; i++)
        mult *= i;

     return mult;
       
};

int main(int N){
    printf(" a soma eh %lf", fatorial(5));
    printf(" a soma eh %lf", fatorial(4));
    printf(" a soma eh %lf", fatorial(3));
}