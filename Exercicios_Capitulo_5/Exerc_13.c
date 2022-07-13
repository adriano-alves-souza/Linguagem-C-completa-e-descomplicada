/*13) Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.*/
#include <stdio.h>

int main(void){
    int i, soma = 0;
    for(i = 0; i <= 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }

    printf("soma de todos os numeros naturas multiplos de 3 ou 5 abaixo de 1000 é %d\n",soma);
    return 0;
}