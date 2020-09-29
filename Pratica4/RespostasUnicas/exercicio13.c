#include <stdio.h>

int enesimoFibonacci(int N){
    if(N == 1) return 1;
    else 
        if(N == 2) return 1;
        else 
            return (N - 1) + ( N - 2);
};

int main (int N){
    printf("o enesiomo numero eh:%d", enesimoFibonacci(8));
}
