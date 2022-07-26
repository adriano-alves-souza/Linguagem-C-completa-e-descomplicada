/*9) Escreva uma função recursiva que receba um número inteiro positivo n. Calcule e
retorne o seu fatorial n!: n! = n * (n – 1) * (n – 2) * ... * 1*/

#include <stdio.h>
int fatorial(int n);
int main(void){
    int n = 8;

    printf("%d! = %d.\n",n,fatorial(n));
    return 0;
}
int fatorial(int fat){
    if(fat == 0){
        return 1;
    }else{
        return fat * fatorial(fat-1);
    }
}