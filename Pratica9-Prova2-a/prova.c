#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DIAS 14
#define TAM_NOME 4
#define FRAC_VAR 0.1

#define ACAO_INI_MIN 5
#define ACAO_INI_MAX 100

#define MAX_ACOES 1000

/*
IMPORTANTE #1: para usar os testes automáticos, fazer com que a funcao DEBUG() retorne 0

IMPORTANTE #2: na versão final do seu programa, a função DEBUG deve retornar 0. 
               Caso contrário, seu programa não será avaliado e você ficará com 0 na prova!           
*/
int DEBUG() {
    return 1;
}

typedef struct Acao {
	//preencha os campos abaixo:
    float precos[NUM_DIAS];
    float max;
    float min;
    char nome[TAM_NOME];

} Acao;



float randVar( float x);
void criaNome(char s[], int n);
void criaAcao(Acao *a);

//Não modifique ou apague o protótipo abaixo!
//int confereSimulaAcoes(Acao acoes[], int n, int melhor_dia, float maior_valor);




//escreva as suas funcoes abaixo:
//(voce pode criar funcoes extras, se preferir)

//1) 
float randVar( float x)
{  
    float min, max;
    max = x + x*FRAC_VAR;
    min = x - x*FRAC_VAR;
    
    return x = min + ((float)rand()/RAND_MAX)* (max - min);

} 

//2)
void criaNome(char s[], int n)
{   
    for ( int i = 0; i < n ; i++)
    { 
        if( i < n - 1)
            s[i] = (65 + (rand()%25));

        else
        {
           s[i] = (48 + rand()%9); 
        }
    }
}

//3)
void criaAcao(Acao *a)
{
    float precoBruto = 0;
    float precoVar = 0;
    float precoFinal = 0;
    int i = 0;
    
    precoBruto = ACAO_INI_MIN + (rand()% ( ACAO_INI_MAX - ACAO_INI_MIN ) );
  
    for ( i = 0; i < NUM_DIAS ; i++)
    {
        float aux = 0;
        precoVar = precoBruto + (precoBruto*FRAC_VAR);

        aux = precoVar;
        precoVar = precoBruto;
        precoBruto = aux;

        a->precos[i] = precoVar;
        printf("Day:%d - %f\n ", i, a->precos[i]);
    }
    
    float min, max;

    max = a->precos[0];
    min = a->precos[0];

    
    for (int i = 0; i < NUM_DIAS; i++)
    {
        if( a->precos[i] >= max)
        {
            max = a->precos[i];
        }
        if( a->precos[i] <= min)
        {
            min = a->precos[i];
        }
    }

    a->max = max;
    // printf("%f\n", max);
    
    a->min = min;
    // printf("%f\n", min);
    
    criaNome(a->nome, TAM_NOME);
    // printf("%s\n", a->nome);
    
    
}

//4)
int melhorDia(Acao portfolio[], int n)
{   
    for (int i = 0; i < n; i++)
    {
        if(portfolio)
        portfolio[i].precos[i] == portfolio[i].preco[i];
    }
    
}

//5)
float maiorLucroPossivel(Acao portfolio[], int n)
{
    // int counter = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     portfolio[i].precos[i] != 0;
    //     counter++;

    //     printf("%d\n", counter);
    // }
    
}

//6)
int simulaAcoes(int n)
{
    Acao a;

    for (int i = 0; i < n; i++)
    {
        criaAcao(&a);
        // printf("%f", &a);
    }

    melhorDia(&a, n);
    maiorLucroPossivel(&a, n);


}


int main()
{
    Acao a, portifolio[MAX_ACOES];

    srand(time(NULL));

    // float portfolio[MAX_ACOES];
    simulaAcoes(4);
    //  printf("%f", a.precos[NUM_DIAS]);
    // for (int i = 0; i < MAX_ACOES; i++)
    // {   
    //     criaAcao(&a);
    //     //printf("%f\n", a.precos[6]);
    //     //printf("%f\n", a.min);
    //     //printf("%f\n", a.max);
    // }
    
    // melhorDia(&a, 20);
    // // randVar(2);
    // // randVar(1);
    // // randVar(5);
    // // randVar(10);

    return 0;

}
