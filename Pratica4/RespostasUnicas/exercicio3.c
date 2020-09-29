#include <stdio.h>

int maior3(int n1, int n2, int n3)
{
    if( n1 > n2)
    {
        if(n1 > n3) return n1;
         else
            return n3;
    } else {
        if( n2 > n3) return n2;
        else 
            return n3;
    }
};

int main( int n1, int n2, int n3){
    
    printf("o maior numero eh %d", maior3(0, -5, -9));

    return 0;
}
