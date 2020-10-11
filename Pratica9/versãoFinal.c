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
    int soma = (1+rand()%6) + (1+rand()%6) + (1+rand()%6);
    return soma;
   
}

void criaGuerreiro( Guerreiro *Guerreiro)
{
    int pontoVidas = 0;
    Guerreiro->ataque = rolaDados();
    Guerreiro->defesa = rolaDados();
    Guerreiro->carisma = rolaDados();
    for(int i = 0; i < 3; i++)
    {
        pontoVidas += rolaDados();    
    }
    Guerreiro->pontos_vida = pontoVidas;
    Guerreiro->id_guerreiro = id;
    id++;
}

int bonusCarisma(int carisma)
{
    int bonus = 0;
    switch(carisma)
    {
        case 18:
            bonus = 3;
            break;
        
        case 17:
            bonus = 2;
            break;
            
        case 16:
            bonus = 2;
            break;
       
        case 15:
            bonus = 1;
            break;
            
        case 14:
            bonus = 1;
            break;
        
        case 7:
            bonus = -1;
            break;
        
         case 6:
            bonus = -1;
            break;
        
        case 5:
            bonus = -2;
            break;
            
        case 4:
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

void ataca( Guerreiro *primeiro, Guerreiro *segundo)
{
    int dano, golpe, escudo;
    golpe = rolaDados() + primeiro->ataque + bonusCarisma(primeiro->carisma);
    escudo = rolaDados() + segundo->defesa + bonusCarisma(segundo->carisma);
    
    dano = golpe - escudo;
    
    if( dano > 0)
        segundo->pontos_vida -= dano;
}


int jogo()
{   
    Guerreiro a,b;
    criaGuerreiro(&a);
    criaGuerreiro(&b);
    
    Guerreiro *aux;
    Guerreiro *primeiro;
    Guerreiro *segundo;
    
    primeiro = &a;
    segundo = &b;
    
    while(1)
    {
        ataca(primeiro, segundo);
        if( segundo->pontos_vida <= 0 )
            break;
        aux = primeiro;
        primeiro = segundo;
        segundo = aux;
    }
    printf("\nVencedor: %d", primeiro->id_guerreiro);
    printf("\nPontos de vida restantes: %d", primeiro->pontos_vida);
}


int main(){
    Guerreiro x, y;

    jogo(&x,&y);
    return 0;
}