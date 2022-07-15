/*10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.*/

#include <stdio.h>
#define TAM 100
int main(void){
    int i,n, v[TAM];

    i = 1;
    n = 0;
    while(n < TAM){
        if(!(i % 7 == 0)){
            v[n] = i;
            n++;
        }
        i++;
    }

    printf("Vetor.\n");
    for(i = 0; i < TAM; i++){
        printf("%d\n", v[i]);
    }
    return 0;
}