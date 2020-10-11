#include <stdio.h>
#include <stdlib.h>

#define maxT 100


void imprimeMatriz( int M[][maxT], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        printf("\n");
       for( int j = 0; j < n; j++)
       {
           printf("%d  ", M[i][j]);
       }
       printf("\n");
    }
    
}

void transladaZeros( int M[][maxT], int m, int n)
{
    int a;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if( M[i][j] == 0)
            {
                for (int x = i - 1; x >= 0; x--)
                {
                    a = M[x][j];
                    if( a == 0)
                        break;
                    else
                    {
                        M[x][j] = M[x+1][j];
                        M[x+1][j] = a;
                    }
                    
                }
                
            }
        }
        
    }
    
}

int zeraTriSem(int M[][maxT], int m, int n)
{
    int MLinha[maxT][maxT], Mcoluna[maxT][maxT];
    int seguinte, anterior;
    int zeros = 0;

    for( int i = 0; i < m; i++)
    {
        seguinte = 0;
        anterior = -1;

        for( int j = 0; j < n; j++)
        {
            MLinha[i][j] = M[i][j];
            
            if( j != n - 1)
            {
                if( MLinha[i][j] != anterior )
                    if ( seguinte >= 3)
                    {
                        for( int x = seguinte; x > 0; x--)
                            MLinha[i][j-x] = 0;
                        seguinte = 1;
                    }
                    else
                    {
                        seguinte++;
                    }
            }
            else
            {
                if( MLinha[i][j] != anterior )
                {
                    if ( seguinte >= 3)
                        for( int x = seguinte; x >= 0; x--)
                            MLinha[i][j-x] = 0;
                    else if ( seguinte >= 2)
                        for( int x = seguinte; x >= 0; x--)
                            MLinha[i][j-x] = 0;
                } 
            }

            anterior = M[i][j];
            
        }
    }
    for( int j = 0; j < n; j++)
    {
        seguinte = 0;
        anterior = -1;

        for( int i = 0; i < m; i++)
        {
            Mcoluna[i][j] = M[i][j];
            
            if( i != m - 1)
            {
                if( Mcoluna[i][j] != anterior )
                    if ( seguinte >= 3)
                    {
                        for( int x = seguinte; x > 0; x--)
                            MLinha[i-x][j] = 0;
                        seguinte = 1;
                    }
                    else
                    {
                        seguinte++;
                    }
            }
            else
            {
                if( Mcoluna[i][j] != anterior )
                {
                    if ( seguinte >= 3)
                        for( int x = seguinte; x >= 0; x--)
                            Mcoluna[i-x][j] = 0;
                    else if ( seguinte >= 2)
                        for( int x = seguinte; x >=  0; x--)
                            Mcoluna[i-x][j] = 0;   
                } 
            }

            anterior = M[i][j];
            
        }
    }
    for( int i = 0; i < m; i++)
        for( int j = 0; j < n; j++)
            if(MLinha[i][j] == 0 || Mcoluna[i][j] == 0)
            {
                M[i][j] = 0;
                zeros++; 
            }

    return zeros;
}





