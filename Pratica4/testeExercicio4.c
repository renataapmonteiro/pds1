#include <stdio.h>
#include "pratica4.h"

int main( int argc, char const *argv[] ){
   
    printf("Teste Exer. 1\n");
    printf("8 Km/h sao %f m/s\n", paraMetrosPorSegundo(8));
    printf("12 Km/h sao %f m/s\n", paraMetrosPorSegundo(12));
    printf("5 Km/h sao %f m/s\n", paraMetrosPorSegundo(5));
    printf("3.6 Km/h sao %f m/s\n", paraMetrosPorSegundo(3.6));
   

    printf("Teste Exer. 2\n");
    printf("A area do circulo com raio 2 eh de %f\n", areaCirculo(2));
    printf("A area do circulo com raio 10 eh de %f\n", areaCirculo(10));
    printf("A area do circulo com raio 21 eh de %f\n", areaCirculo(21));
    printf("A area do circulo com raio 9 eh de %f\n", areaCirculo(9));

    printf("Teste Exer. 3\n");
    printf("No trio 0 ,-5, -9 maior numero eh %d\n", maior3(0, -5, -9));
    printf("No trio 3 ,5 , 8 maior numero eh %d\n", maior3(3, 5, 8));
    printf("No trio 15, 12, 6 maior numero eh %d\n", maior3(15, 12, 6));
    printf("No trio -2, -6 ,-85 maior numero eh %d\n", maior3(-2, -6, -85));

    printf("Teste Exer. 4\n");
    printf("O numero 6 eh par: %d\n", ehPar(6));
    printf("O numero 9 eh par: %d\n", ehPar(9));
    printf("O numero 144 eh par: %d\n", ehPar(144));
    printf("O numero 221 eh par: %d\n", ehPar(221));

    printf("Teste Exer. 5\n");
    printf("O numero 15 eh divisivel por 3 ou por 5: %d\n", ehDivisivelPor3ou5(15));
    printf("O numero 9 eh divisivel por 3 ou por 5: %d\n", ehDivisivelPor3ou5(9));
    printf("O numero 25 eh divisivel por 3 ou por 5: %d\n", ehDivisivelPor3ou5(25));
    printf("O numero 5 eh divisivel por 3 ou por 5: %d\n", ehDivisivelPor3ou5(5));

    printf("Teste Exer. 6\n");
    printf("Seu peso ideal eh %f\n", pesoIdeal(1.62, 'F'));
    printf("Seu peso ideal eh %f\n", pesoIdeal(1.85, 'M'));
    printf("Seu peso ideal eh %f\n", pesoIdeal(1.70, 'F'));
    printf("Seu peso ideal eh %f\n", pesoIdeal(1.98, 'M'));

    printf("Teste Exer. 8\n");
    printf("A soma de numeros impares entre 5-0 eh %d\n", somaImpares(5));
    printf("A soma de numeros impares entre 15-0 eh %d\n", somaImpares(15));
    printf("A soma de numeros impares entre 9-0 eh %d\n", somaImpares(9));
    printf("A soma de numeros impares entre 25-0 eh %d\n", somaImpares(25));


    printf("Teste Exer. 9\n");
    printf(" O fatorial de 5 eh %lf\n", fatorial(5));
    printf(" O fatorial de 4 eh %lf\n", fatorial(4));
    printf(" O fatorial de 3 eh %lf\n", fatorial(3));
    printf(" O fatorial de 10 eh %lf\n", fatorial(10));


    printf("Teste Exer. 10\n");
    printf("A soma de numeros divisiveis po 5 ou 3 no intervalo 15-0 %d\n", somaNumerosDiv3ou5(15));
    printf("A soma de numeros divisiveis po 5 ou 3 no intervalo 9-0 %d\n", somaNumerosDiv3ou5(9));
    printf("A soma de numeros divisiveis po 5 ou 3 no intervalo 25-0 %d\n", somaNumerosDiv3ou5(25));
    printf("A soma de numeros divisiveis po 5 ou 3 no intervalo 5-0 %d\n", somaNumerosDiv3ou5(5));

    printf("Teste Exer. 11\n");
    printf("A media geometrica de 1, 1, 4 eh %f\n", calculaMedia(1,1,4,1));
    printf("A media ponderada de 1, 1, 4 eh %f\n", calculaMedia(1,1,4,2));
    printf("A media harmonica de 1, 1, 4 eh %f\n", calculaMedia(1,1,4,3));
    printf("A media aritimetica de 1, 1, 4 eh %f\n", calculaMedia(1,1,4,4));

    printf("Teste Exer. 12\n");
    printf("O numero 9 possui %d divisores no intervalo de 9-0\n", numeroDivisores(9));
    printf("O numero 18 possui %d divisores no intervalo de 18-0\n", numeroDivisores(18));
    printf("O numero 20 possui %d divisores no intervalo de 20-0\n", numeroDivisores(20));
    printf("O numero 15 possui %d divisores no intervalo de 15-0\n", numeroDivisores(15));

    printf("Teste Exer. 13\n");
    printf("o 8 numero de fibonacci eh:%d\n", enesimoFibonacci(8));
    printf("o 14 numero de fibonacci eh:%d\n", enesimoFibonacci(14));
    printf("o 28 numero de fibonacci eh:%d\n", enesimoFibonacci(28));
    printf("o 90 numero de fibonacci eh:%d\n", enesimoFibonacci(90));

    printf("Teste Exer. 14\n");
    printf("o mdc de 24 e 9 eh: %d\n", mdc(24,9));
    printf("o mdc de 63 e 5 eh: %d\n", mdc(63,5));
    printf("o mdc de 13 e 6 eh: %d\n", mdc(13,6));
    printf("o mdc de 12 e 7 eh: %d\n", mdc(12,7));

    printf("Teste Exer. 15\n");
    printf("o mmc de 12 e 20 eh: %u\n", mmc(12,20));
    printf("o mmc de 2 e 20 eh: %u\n", mmc(2,20));
    printf("o mmc de 15 e 32 eh: %u\n", mmc(15,32));
    printf("o mmc de 96 e 8 eh: %u\n", mmc(96,8));


    return 0;
}