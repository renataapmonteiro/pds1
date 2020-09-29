#include <stdio.h>
#include <stdlib.h>

void init(int *chave, int *n )
{
    int a, b;
    
    chave = &a;
    n = &b;

    printf("Chave:");
    scanf("%d", &a);
    
    printf("Tentativas:");
    scanf("%d", &b);

    if( *n <= 0) {
        b = *n = 1;
    }
    
    printf("chave eh %d e n eh %d\n", *chave, *n);
    
    system ("cls");
}

