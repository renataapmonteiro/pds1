#include <stdio.h>
#include <math.h>

int numeroDivisores(int N){
    int a = 1;
    for( int i = 2; i <= N; i++)
        if( N % i == 0)     
            a++;
    return a;
};

int main(int N){
    printf("%d", numeroDivisores(9));
}
