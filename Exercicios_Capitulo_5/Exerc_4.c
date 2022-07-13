/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/
#include <stdio.h>

int main(void){
    int i,j;

    i = 1;
    j = 1;
    while(j <= 5){
        if(i % 3 == 0){
            printf("%d\n",i);
            j++;
        }
        i++;
    }
    return 0;
}