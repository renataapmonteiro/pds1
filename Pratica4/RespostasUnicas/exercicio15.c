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


int mmc(unsigned int x, unsigned int y){    
    return (x * y) / mdc(x, y);
};

int main(unsigned int x, unsigned int y){
    printf("o mmc eh: %u", mmc(12,20));
}
