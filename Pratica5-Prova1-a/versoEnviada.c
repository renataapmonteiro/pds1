#include <stdio.h>
#include <stdlib.h>

void init(int *chave, int *n)
{
    printf("Chave:");
    scanf("%d", chave);
    
    printf("Tentativas:");
    scanf("%d", n);
    
    if(*n <= 0)
    {
        *n =1;
    }
    
    system("cls");
}

int testa( int palpite, int chave)
{
    if( chave == palpite)
    {
        printf("Acertou!\n");
        return 1;
    }
    if(( chave - palpite ) == 1 || ( palpite - chave) == 1){
        printf("Errou por 1!\n");
        return 0;
    }
    
    if(chave > palpite){
        printf("Maior!\n");
        return 0;
    } else {
        printf("Menor!\n");
        return 0;
    }
    
}

int jogo(int chave, int n)
{
    int palpite = 0;
    int count = 0;
    int resultado = 0;
    int palpit1 = 0;
    

    do{
        //printf("Entre com seu palpite:");
        scanf("%d", &palpite);
        
        if(( palpite == -999) && (count == 0))
        {
            printf("%d\n", chave);
            continue;
        } else if( palpite == -999)
        {
            count += 0;
            printf("%d\n", (chave - palpit1));
        } else
        {   
            palpit1 = palpite;
            count += 1;
            resultado = testa(palpite, chave);
            
        }
    } while ((chave != palpite) && (count < n));
    
    if(resultado == 1) return 1;
    else return 0;
}



void jogar()
{
    int chave = 0;
    int n = 0;
    int newG = 1;
    
    while( newG == 1)
    {
        init(&chave, &n);
        jogo(chave, n);
        
        
        printf("Jogar Novamente? (0=N, 1=S)\n");
        scanf("%d", &newG);
    }
}

void main(){
    jogar(-999,3);
}