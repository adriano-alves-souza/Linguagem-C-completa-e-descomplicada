/*10) Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
triplo, e d, o quádruplo.*/

#include <stdio.h>

int main(void){
    int a = 5;

    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("Dobro de %d é %d.\n",*b, (*b) * (*b));
    printf("Triplo de %d é %d.\n",**c, (**c) * (**c) * (**c));
    printf("Quadruplo de %d é %d.\n",***d,(***d) * (***d) * (***d) * (***d));
    return 0;
}