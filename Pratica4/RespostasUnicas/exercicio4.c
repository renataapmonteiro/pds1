#include <stdio.h>
#include <math.h>

int ehPar(int n)
{
    if(n % 2 == 0) return 1;
    else return 0;
};

int main(int n){
    printf("Digite um numero:");
    scanf("%d", &n);
    printf("%d", ehPar(n));

    return 0;
}