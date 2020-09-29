#include <stdio.h>
#include <stdlib.h>

void game(int *chave, int *n);

int jogo(int chave, int n);

int testa(int palpite, int chave);


int main()
{
    int chave;
    int n;

    printf("Chave:");
    scanf("%d", &chave);

    printf("Tentativas:");
    scanf("%d", &n);
    game(&chave,&n);
    printf("%d\n",jogo(chave,n));
 

    printf("%d , %d \n", chave, n);
}

void game(int *chave, int *n)
{
    if (*n <= 0)
    {
        *n = 1;
    }

    printf("%d , %d \n", *chave, *n);
}

int jogo(int chave, int n)
{
    int palpite;
    int count = 0;
    int resultado = 0;

    do
    {

        printf("Entre com seu palpite:");
        scanf("%d", &palpite);

        resultado = testa(chave, palpite);
        count += 1;

    } while ((chave != palpite) && (count < n));
    if(resultado == 1) return 1;
    else return 0;
}

int testa(int palpite, int chave)
{
    if (chave == palpite)
    {
        printf("Acertou!\n");
        return 1;
    }
    while (!(chave == palpite))
    {
        if (chave - palpite == 1)
        {
            printf("Errou por 1!\n");
        }
        else if (chave > palpite)
        {
            printf("Maior!\n");
        }
        else
            printf("Menor!\n");

        return 0;
    }

    if (chave == palpite)
    {
        printf("Acertou!\n");
        return 1;
    }
}