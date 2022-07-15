/*2) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
tela os valores lidos na ordem inversa.*/

#include <stdio.h>

int main(void){
    int i, v[6];

    printf("Digite seis valores inteiros.\n");
    for(i = 0; i < 6; i++){
        printf("valor %d: ",i+1);
        scanf("%d", &v[i]);
    }

    for(i = 6-1; i >= 0; i--){
        printf("--%d\n",v[i]);
    }
    return 0;
}