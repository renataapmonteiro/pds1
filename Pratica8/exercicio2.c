#include <stdio.h>
#include "redesocial.h"

void main() {

    popularRedeSocialAleatoriamente(0.6);
    imprimirRedeSocial();
    int n = numAmigosEmComum(2,4);
    printf("\nnumero de amigos em comum entre 2 e 4: %d", n); 
}

