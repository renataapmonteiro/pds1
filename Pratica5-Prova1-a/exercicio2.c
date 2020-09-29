#include <stdio.h>
#include <stdlib.h>

int testa( int palpite, int chave)
{
    if( chave == palpite){
        printf("Acertou!\n");
        return 1;
    }
    while (chave != palpite)
    {
        if((chave - palpite) == 1){
            printf("Errou por 1!\n");
        } 
        else if( chave > palpite){
            printf("Maior!\n");
        } else
           printf("Menor!\n");

        return 0;
    }; 
         
}

// int main( int argc, int argv[]){
//     printf("%d\n", testa(120, 120));
//     printf("%d\n", testa(10, 120));
//     printf("%d\n", testa(120, 12));
//     printf("%d\n", testa(119, 120));
// }