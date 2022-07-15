/*12) Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
iguais e os escreva na tela.*/

#include <stdio.h>
#define TAM 10
int main(void){
    int i, vet[TAM];

    for(i = 0; i < TAM; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    int j,cont;
    for(i = 0; i < TAM; i++){
        cont = 0;
        for(j = 0; j < TAM; j++){
            if(vet[i] == vet[j]){
                cont++;
            }
        }
        if(cont > 1){
            printf("%d\n", vet[i]);
        }
    }
    return 0;
}