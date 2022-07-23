/*12) Escreva uma função que receba um número inteiro positivo e retorne o maior fator primo desse número.*/

#include <stdio.h>
int fatPrimo(int x);
int main(void){
    int x;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &x);

    printf("Maior fator primo de %d é %dn",x,fatPrimo(x));
    return 0;
}

int fatPrimo(int x){
    int i = 2;
    while(x > 1){
        if(x % i != 0){
            i++;
        }else{
            x /= i;
        }
    }
    return i;
}