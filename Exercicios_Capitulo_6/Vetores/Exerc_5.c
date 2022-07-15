/*5) Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.*/

#include <stdio.h>

int main(void){
    int i,v[8];

    printf("Digite oito valores inteiros.\n");
    for(i = 0; i < 8; i++){
        printf("valor %d: ",i+1);
        scanf("%d",&v[i]);
    }

    int x,y;
    printf("Digite dois valores x e y: ");
    scanf("%d %d", &x,&y);

    printf("Soma = %d\n",v[x-1] + v[y-1]);
    return 0;
}