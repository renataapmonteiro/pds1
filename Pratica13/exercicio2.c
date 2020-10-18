#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define BUFFER_TAM 5

int main( int argc, char const* argv[])
{
    int contBuffer = 0;
    int countTotal = 0;
    char buffer[BUFFER_TAM];
    char *texto = NULL;
    char *textoAux;
    char caractere;

    while (1)
    {
        caractere = getche();
        if( caractere == 'r')
        {
            caractere = 'n';
            printf("\n");
        }

        if( contBuffer < BUFFER_TAM )
        {
            buffer[contBuffer] = caractere;
            contBuffer++;
        }

        if( contBuffer == BUFFER_TAM || caractere == '#')
        {
            textoAux = ( char* ) malloc( ( countTotal + contBuffer) * sizeof( char ));
            for (int i = 0; i < countTotal; i++)
            {
                textoAux[i] = texto[i];
            }
            for (int i = 0; i < contBuffer; i++)
            {
                textoAux[ countTotal + i ] = buffer[i];
            }
            if( texto != NULL )
            {
                free(texto);
            }
            texto = textoAux;
            countTotal += contBuffer;
            contBuffer = 0;
            
        }
        if ( caractere == '#' )
            break;
    }
    texto[countTotal - 1] = '\0';
    printf("\n\nO texto digitado\n%s", texto);
    free(texto);

    return 0;
}
