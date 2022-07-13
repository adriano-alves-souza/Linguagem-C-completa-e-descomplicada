/*10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:
Número digitado         Média 
        1           Geométrica: raiz 3 (x * y * z)
        2           Ponderada: (x + 2 * y + 3 * z) / 6
        3           Harmônica: 1 / (1/x + 1/y + 1/z)
        4           Aritmética: (x + y + z) / 3 */
#include <stdio.h>
#include <math.h>

int main(void){
    int x,y,z,opcao;
    float total;

    printf("Digite 3 numeros inteiros positivos: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("Qual media deseja:\nGeométrica: 1\nPonderada: 2\nHarmônica: 3\nAritmética: 4\nOpção: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            total = cbrt(x*y*z);
            printf("Geométrica %f\n", total);
        break;
        case 2:
            total = (x + 2 * y + 3 * z) / 6.0;
            printf("Ponderada = %f\n", total);
        break;
        case 3:
            total = 3.0 / (1.0/x + 1.0/y + 1.0/z);
            printf("Harmônica = %f\n", total);
        break;
        case 4:
            total = (x + y + z) / 3.0;
            printf("Aritmética = %f\n", total);
        break;
    }
    return 0;
}