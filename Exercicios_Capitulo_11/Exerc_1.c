/*1) Escreva um programa que mostre o tamanho em byte que cada tipo de dados
ocupa na memória: char, int, float, double.*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("%d.\n%d.\n%d.\n%d.\n",sizeof(char),sizeof(int),sizeof(float),sizeof(double));
    return 0;
}