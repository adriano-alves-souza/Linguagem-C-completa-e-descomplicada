/*14) Escreva uma função que receba um número inteiro positivo n. Calcule e retorne
o seu fatorial n!: n! = n * ( – 1) * (n – 2) * ... * 1.*/

#include <stdio.h>

int fatorial(int n);
int main(void){
    int fat;

    printf("Fatorial de  ");
    scanf("%d", &fat);

    printf("%d! = %d\n",fat,fatorial(fat));
    return 0;
}

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n -1);
    }
}