#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[] = "Renata";
    int i = 0;
    
    printf("O valor ASCII de %s :", name);

    while (name[i])
    {
        printf(" %d", name[i++]);
    }
    
    return 0;
}