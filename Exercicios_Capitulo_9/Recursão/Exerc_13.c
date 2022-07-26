/*13) Faça uma função recursiva que calcule o valor da série S descrita a seguir para um
valor n maior do que zero a ser fornecido como parâmetro para a mesma: s= 2 + 5/2 + 10/3 +...+ (1+n²)/n */

#include <stdio.h>

float serieS(int n);

int main(void){
    int termo = 6;

    printf("S = %f.\n",serieS(termo));
    return 0;
}

float serieS(int n){
    if(n == 0){
        return 0;
    }else{
        return (1+(n*n)) / n + serieS(n-1);
    }
}