/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
#include <stdio.h>

int main(void){
    int i,j,soma = 0;

    
    for(i = 0; i <= 100; i += 2){
        soma += i;
    }
    /*j = 1;
    i = 1;
    while(j <= 50){
        if(i % 2 == 0){
            soma += i;
            j++;
        }
        i++;
    }
    i = 0;
    while(i <= 100){
        if(i % 2 == 0){
            soma += i;
        }
        i+= 2;
    }
    */
    printf("Soma dos 50 primeiros numeros pares é %d\n",soma);
    return 0;
}