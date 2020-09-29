#include <stdio.h>
#include <math.h>

int mdc(unsigned int x, unsigned int y){
    int resto;
    do{
        resto = x % y;
        x = y;
        y = resto;
    } while(resto != 0);

    return x;
};

int main(unsigned int x, unsigned int y){
    printf("o mdc eh: %d", mdc(24,9));
}