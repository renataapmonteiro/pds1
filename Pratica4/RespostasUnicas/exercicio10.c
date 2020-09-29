#include <stdio.h>
#include <math.h>


int ehDivisivelPor3ou5(int n)
{
    if( n % 3 == 0 || n % 5 ==0)
        if( !(n % 3 == 0) || !( n % 5 == 0))
            return 1;
            else return 0;
};


int somaNumerosDiv3ou5(int N){ 
    int soma = 0;
    int i = 1;
    while ( i <= N)
    {
        if(ehDivisivelPor3ou5(i))
            soma += i;
        i++;
    }
        return soma;

};


int main(int n){
   printf("%d\n", somaNumerosDiv3ou5(15));
   printf("%d\n", somaNumerosDiv3ou5(9));
   printf("%d\n", somaNumerosDiv3ou5(25));
   printf("%d\n", somaNumerosDiv3ou5(5));
}