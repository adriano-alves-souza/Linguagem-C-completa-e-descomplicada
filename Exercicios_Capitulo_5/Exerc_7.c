/*7) Elabore um programa que peça ao usuário para digitar 10 valores. 
Some esses valores e apresente o resultado na tela.*/
#include <stdio.h>

int main(void){
    int i;
    float n,soma = 0;
    printf("Digite 10 valores\n");
    for(i = 1; i <= 10; i++){
        printf("Valor %d: ",i);
        scanf("%f", &n);
        soma += n;
    }
    printf("A soma dos 10 valores digitados é %f\n",soma);
    return 0;
}