#include <stdio.h>
#include <stdlib.h>

void init(int *chave, int *n );
int testa( int palpite, int chave);
int jogo( int chave, int n);

void main()
{

    int chave;
    int n; 
    int newG = 1;

    while ( newG == 1)
    {
        init(&chave, &n);
        jogo(chave, n);
   

   

        printf("Jogar novamente? 1-S 0-N\n");
        scanf("%d", &newG);
    }

}


void init(int *chave, int *n )
{
  
    printf("Chave:");
    scanf("%d", chave);
    
    printf("Tentativas:");
    scanf("%d", n);

    if( *n <= 0) {
        *n = 1;
    }
    
    printf("chave eh %d e n eh %d\n", *chave, *n);
    
    system ("cls");
}


int testa( int palpite, int chave)
{
    if( chave == palpite){
        printf("Acertou!\n");
        return 1;
    }
    while (chave != palpite)
    {
        if((chave - palpite) == 1 || (palpite - chave) == 1){
            printf("Errou por 1!\n");
        } 
        else if( chave > palpite){
            printf("Maior!\n");
        } else
           printf("Menor!\n");

        return 0;
    }; 
         
}

// int jogo( int chave, int n)
// {
//     int palpite;
//     int count = 0;
//     int resultado = 0;

//     do{

//         printf("Entre com seu palpite:");
//         scanf("%d", &palpite);

//         resultado = testa(chave, palpite);
//         count += 1;

//     } while( (chave != palpite) && (count < n) );

//     if(resultado == 1) return 1;
//     else 
//         return 0;

// }

int jogo( int chave, int n)
{
    int palpite;
    int count;
    int resultado;
    int palpit1 = 0;


    count = 0;
   
 
    do{
        printf("Entre com seu palpite:");
        scanf("%d", &palpite);

        if( (palpite == -999) && (count == 0))
        {
            printf("%d\n", chave);
            continue;
        } else if( palpite == -999 )
        {
            count += 0;
            printf("%d\n", ( chave - palpit1));
        } else
        {
            resultado = testa(palpite, chave);
            palpit1 = palpite;
            count += 1;
        }
        
    } while( (chave != palpite) && (count < n) );

    if(resultado == 1) return 1;
    else 
        return 0;

}