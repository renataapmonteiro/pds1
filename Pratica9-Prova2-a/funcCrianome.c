#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define maxT 4

int main( int n)
{ 
    srand(time(NULL));
    char s[n];
    n = maxT;

    for ( int i = 0; i < n - 1 ; i++)
    {
       s[i] = (65 + (rand()%25));
       printf("%c\n", s[i]);
       
    }

    int i;

    if(i = n)
    {
        s[i] = '1' +rand()%9;
        printf("%c\n", s[i]);
    }
    
}