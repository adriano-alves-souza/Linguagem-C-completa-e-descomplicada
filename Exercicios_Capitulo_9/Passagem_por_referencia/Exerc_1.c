/*1) Escreva uma função que, dado um número real passado como parâmetro, retorne
a parte inteira e a parte fracionária desse número por referência.*/

#include <stdio.h>
void parte(float n, int *x, float *y);
int main(void){
    float num,y;
    int x;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    parte(num, &x, &y);

    printf("parte inteira %d\nparte fracionaria %f\n",x,y);
    return 0;
}
void parte(float n, int *x, float *y){
    *x = n;
    *y = n - *x;
}