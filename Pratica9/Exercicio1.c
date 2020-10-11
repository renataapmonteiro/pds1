#include <stdio.h>
#include <stdlib.h>

int id = 1;

typedef struct Guerreiro
{
    int ataque;
    int defesa;
    int carisma;
    int pontos_vida;
    int id_guerreiro;
} Guerreiro;

int rolaDados()
{
    int soma = (1 + rand()%6) + (1 + rand()%6) + (1 + rand()%6) ;
    return soma;
}

void criaGuerreiro( Guerreiro *Guerreiro)
{   
    int pVidas = 0;
    Guerreiro->ataque = rolaDados();
    Guerreiro->carisma = rolaDados();
    Guerreiro->defesa = rolaDados();
    for (int i = 0; i < 3; i++)
    {
        pVidas += rolaDados();
    }
    Guerreiro->pontos_vida = pVidas;
    Guerreiro->id_guerreiro = id;
    id++;
}

int bonusCarisma( int carisma)
{
    int bonus;
    switch (carisma)
    {
    case 18:
        bonus = 3;
        break;
    case 16 ... 17:
       bonus = 2;
        break;
    case 14 ... 15:
        bonus = 1;
        break;
    case 6 ... 7:
        bonus = -1;
        break;
    case 4 ... 5:
        bonus = -2;
        break;
    case 3:
        bonus = -3;
        break;
    
    default:
        bonus = 0;
        break;
    }
    return bonus;
}

void ataca(Guerreiro *a, Guerreiro *b)
{
    int dano, golpe, escudo;
    golpe = rolaDados() + a->ataque + bonusCarisma(a->carisma);
    escudo = rolaDados() + b->defesa + bonusCarisma(b->carisma);
    dano = golpe - escudo;
    if( dano  > 0)
    {
        b->pontos_vida -= dano;
    }   
}

int jogo( Guerreiro *a, Guerreiro *b)
{
    Guerreiro *aux; 
    Guerreiro *atacante; 
    Guerreiro *defensor;

    atacante = a;
    defensor = b;
    while(1)
    {
        ataca(atacante, defensor);
        if(defensor->pontos_vida <= 0)
        {
            break;
        }
        aux = atacante;
        atacante = defensor;
        defensor = aux;
    }

    printf("\nVencedor: %d", atacante->id_guerreiro);
    printf("\nPontos de vida restantes: %d", atacante->pontos_vida);

}

int main(){

    rolaDados();

    Guerreiro a, b;
    criaGuerreiro(&a);
    printf("%d\n", a.id_guerreiro);
    criaGuerreiro(&b);
    printf("%d", b.id_guerreiro);

    jogo(&a,&b);
    
    return 0;
}
