/*6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor.*/

#include <stdio.h>

int main(void){
    int i, v[10];

    printf("Digite 10 valores.\n");
    for(i = 0; i < 10; i++){
        printf("Valor %d: ",i+1);
        scanf("%d", &v[i]);
    }

    int contPar = 0;
    for(i = 0; i < 10; i++){
        if(v[i] % 2 == 0){
            contPar++;
        }
    }

    printf("Numero de pares digitados %d\n",contPar);


    return 0;
}