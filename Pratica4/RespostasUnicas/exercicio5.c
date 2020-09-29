#include <stdio.h>
#include <math.h>

int ehDivisivelPor3ou5(int n)
{
    if( n % 3 == 0 || n % 5 ==0)
        if( !(n % 3 == 0) || !( n % 5 == 0))
            return 1;
            else return 0;
};

int main(int n){
   printf("%d", ehDivisivelPor3ou5(15));
   printf("%d", ehDivisivelPor3ou5(9));
   printf("%d", ehDivisivelPor3ou5(25));
   printf("%d", ehDivisivelPor3ou5(5));
}