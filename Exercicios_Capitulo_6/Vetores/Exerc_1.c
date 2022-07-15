/*1) Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
tela os valores lidos.*/

#include <stdio.h>

int main(void){
    int i, v[6];
    printf("Digite seis valores inteiros\n");
    for(i = 0; i < 6; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &v[i]);
    }

    for(i = 0; i<6; i++){
        printf("--%d\n",v[i]);
    }
    return 0;
}