// Exercício 2: Calculador de conceito
 
// O conceito de um aluno é calculado a partir de sua nota, seguindo a tabela abaixo. Faça um programa que 
// lê a nota de um aluno do teclado e imprime seu conceito. Assuma que alunos só podem receber notas inteiras 
// (isto é, sem decimais). Você deve usar o comando switch para verificar a nota lida.


//  Nota  Conceito
// 0 a 4     F
//   5       E
//   6       D
//   7       C
//   8       B
//   9+      A

#include<stdio.h>
#include<math.h>

#define maxNota 100

int main( int argc, const char *argv[]){

    int nota;
    char conceito;

    do{
        printf("Entre com sua nota (OBS: apenas valores inteiros):");
        scanf("%d", &nota);
        switch (nota)
        {
            case 0 ... 4:
                conceito = 'F';
                break;
            case 5:
                conceito = 'E';
                break;
            case 6:
                conceito = 'D';
                break;
            case 7:
                conceito = 'C';
                break;
            case 8:
                conceito = 'B';
                break;
            case 9 ... maxNota:
                conceito = 'A';
                break;
            default:
                printf("Nota invalida\n");
                break;
        };
    } while( nota < 0 );

    printf("Seu conceito eh %c", conceito);
    return 0;
   
};



