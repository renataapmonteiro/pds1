#include <stdio.h>
#include <math.h>

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

int main(int x, int y, int z, int operacao){
    printf("%f", calculaMedia(1,1,4,1));
}