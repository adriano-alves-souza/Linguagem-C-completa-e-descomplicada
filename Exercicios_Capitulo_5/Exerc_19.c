/*Faça um programa que calcule e escreva o valor de S:
S = 1/1 + 3/2 + 5/3 + 7/4 ...99/50*/
#include <stdio.h>

int main(void){
    float s = 0.0;
    int i,j;

    for(i = 1, j = 1; i <= 50; i++,j+=2){
        s += ((float)j/i);
    }
    printf("O valr de S é %f\n",s);
    return 0;
}