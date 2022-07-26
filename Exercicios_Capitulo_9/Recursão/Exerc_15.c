/*Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:
Hn = 1+ 1/2 + 1/3 + 1/4 +...+ 1/n
Escreva uma função recursiva que calcule o valor de qualquer Hn.*/

#include <stdio.h>

float numeroHarmonico(int n);
int main(void){
    int termo = 5;

    printf("H = %f.\n",numeroHarmonico(termo));
    return 0;
}

float numeroHarmonico(int n){
    if(n == 0){
        return 0;
    }else{
        return 1.0 / n + numeroHarmonico(n - 1);
    }
}